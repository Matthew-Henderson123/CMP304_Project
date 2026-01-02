// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h" 
#include "InputActionValue.h"
#include "MyGameInstance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Logging/LogMacros.h"
#include "Components/CapsuleComponent.h"
#include "MenuUi.h"
#include "StatsUI.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class CMP304PROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//The players mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SphereMesh;

	//Controls for the player
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* MoveContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;

	//The reference for the game instance
	UMyGameInstance* GameInstance = Cast<UMyGameInstance>(GetGameInstance());


	//Used for the UI at the begining and end of the game
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UMenuUi> MenuHudClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UStatsUI> StatsHudClass;

	UPROPERTY()
	UMenuUi* MenuHud;

	UPROPERTY()
	UStatsUI* StatsHud;

	//Function to move the player
	UFUNCTION()
	void Move(const FInputActionValue& Value);

	//Functions that handle collisions
	UFUNCTION()
	void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
