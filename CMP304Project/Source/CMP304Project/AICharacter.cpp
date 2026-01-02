// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"

// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	//Creates and attaches the meshes to the AI hierarchy so they can be edited in the editor
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere Mesh"));

	SphereMesh->SetupAttachment(GetMesh());

	//The cone mesh is used as the AI's vision
	ConeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cone Mesh"));

	ConeMesh->SetupAttachment(GetMesh());

	//Sets the AI's movement to nav walking so the navigation mesh can control its movement
	GetCharacterMovement()->SetMovementMode(MOVE_NavWalking);
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	bUseControllerRotationYaw = false;
}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();

	//Sets up all the collisions to be based on the capsule
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &AAICharacter::OnCompHit);
}

void AAICharacter::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (AAIController* MyController = Cast<AAIController>(GetController()))
		{
			//First check that the blackboard meets all the requirments and that the object hit was the spawner
			if (Hit.GetActor()->ActorHasTag(FName(TEXT("Spawner"))) && !MyController->GetBlackboardComponent()->GetValueAsBool("HasTouchedSpawner") && MyController->GetBlackboardComponent()->GetValueAsBool("HasLostPlayer"))
			{
				//Makes sure it only spawns once
				if(!BSpawn)
				{
					//Spawns a new AI character at the top and bottom of the arena
					AAICharacter* SpawnedAI1 = GetWorld()->SpawnActor<AAICharacter>(AIToSpawn, SpawnLocation1, SpawnRotation1);
					AAICharacter* SpawnedAI2 = GetWorld()->SpawnActor<AAICharacter>(AIToSpawn, SpawnLocation2, SpawnRotation2);

					BSpawn = true;
				}
			}
		}
	}
}

// Called every frame
void AAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}