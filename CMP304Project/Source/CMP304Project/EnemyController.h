// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "Logging/LogMacros.h"
#include "AICharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API AEnemyController : public AAIController
{
	GENERATED_BODY()
	
public:
	AEnemyController();

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

	UMyGameInstance* GameInstance;

	AAICharacter* Enemy;

	float CurrentValue;
	float NewValue;
	float FatigueCost;
	float SprintSpeed;
	float NormalSpeed;
};
