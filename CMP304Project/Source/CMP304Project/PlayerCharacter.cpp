// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Assigns the mesh to the players hierarchy so it will be editable in the editor
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere Mesh"));

	SphereMesh->SetupAttachment(GetMesh());
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Sets up all the collisions to be based on the capsule
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &APlayerCharacter::OnCompHit);
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OnOverlapBegin);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &APlayerCharacter::OnOverlapEnd);
	
	check(GEngine != nullptr);

	//Gets the player controller for this character
	APlayerController* PlayerController = Cast<APlayerController>(Controller);

	//Sets the speed of the player to be the value that was decided in the menu
	if (UCharacterMovementComponent* MovementComponent = GetCharacterMovement())
	{
		MovementComponent->MaxWalkSpeed = GameInstance->GetPlayerSpeed();
	}

	if (PlayerController)
	{
		//Gets the enhanced input local player subsystem and add a new input mapping context to it
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(MoveContext, 0);
		}
	}

	//Depending on what level the player is on spawn the UI for that level
	if (GameInstance)
	{
		if (UGameplayStatics::GetCurrentLevelName(GetWorld(), true) == "Menu")
		{
			MenuHud = CreateWidget<UMenuUi>(PlayerController, MenuHudClass);

			if (MenuHud)
			{
				MenuHud->AddToViewport();
			}
		}

		if (UGameplayStatics::GetCurrentLevelName(GetWorld(), true) == "Stats")
		{
			StatsHud = CreateWidget<UStatsUI>(PlayerController, StatsHudClass);

			if (StatsHud)
			{
				StatsHud->AddToViewport();
			}
		}
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Bind Movement Actions
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
	}
}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	// 2D Vector of movement values returned from the input action
	const FVector2D MovementValue = Value.Get<FVector2D>();

	if (Controller)
	{
		// Add left and right movement
		const FVector Right = GetActorRightVector();
		AddMovementInput(Right, MovementValue.X);

		// Add forward and back movement
		const FVector Forward = GetActorForwardVector();
		AddMovementInput(Forward, MovementValue.Y);
	}

}

//Gets called whenever the player capsule collides with another object and passes through the object hits variables
void APlayerCharacter::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//When the player collides with the goal change the level
		if (Hit.GetActor()->ActorHasTag(FName(TEXT("Goal"))))
		{
			if (GameInstance)
			{
				GameInstance->AddPlayerWin();
				UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Level2")));
			}
		}
		else if (Hit.GetActor()->ActorHasTag(FName(TEXT("Goal2"))))
		{
			if (GameInstance)
			{
				GameInstance->AddPlayerWin();
				UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Level3")));
			}
		}
		else if (Hit.GetActor()->ActorHasTag(FName(TEXT("Goal3"))))
		{
			if (GameInstance)
			{
				GameInstance->AddPlayerWin();
				UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Stats")));
			}
		}
		else if (Hit.GetActor()->ActorHasTag(FName(TEXT("Enemy"))))
		{
			//When the player collides with the AI change the level
			if (UGameplayStatics::GetCurrentLevelName(GetWorld(), true) == "Main")
			{
				UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Level2")));
			}
			else if (UGameplayStatics::GetCurrentLevelName(GetWorld(), true) == "Level2")
			{
				UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Level3")));
			}
			else if (UGameplayStatics::GetCurrentLevelName(GetWorld(), true) == "Level3")
			{
				UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Stats")));
			}
		}
	}
}

//Gets called whenever the player capsule starts to overlap with another object and passes through the object hits variables
void APlayerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (APawn* Enemy = Cast<APawn>(OtherActor))
		{
			//Change the blackboard variables so that the AI can follow the player
			if (AAIController* EnemyCont = Cast<AAIController>(Enemy->GetController()))
			{
				EnemyCont->GetBlackboardComponent()->SetValueAsBool("CanSee", true);
				EnemyCont->GetBlackboardComponent()->SetValueAsBool("HasLostPlayer", false);
			}
		}
	}
}

//Gets called whenever the player capsule exits the overlap with another object and passes through the object hits variables
void APlayerCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (APawn* Enemy = Cast<APawn>(OtherActor))
		{
			//Change the blackboard variables so that the AI can stop following the player
			if (AAIController* EnemyCont = Cast<AAIController>(Enemy->GetController()))
			{
				EnemyCont->GetBlackboardComponent()->SetValueAsBool("CanSee", false);
				EnemyCont->GetBlackboardComponent()->SetValueAsBool("HasLostPlayer", true);
			}
		}
	}
}

