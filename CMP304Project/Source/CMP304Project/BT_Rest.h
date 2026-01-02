// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Logging/LogMacros.h"
#include "BT_Rest.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API UBT_Rest : public UBTTaskNode
{
	GENERATED_BODY()
	
	UBT_Rest();

	//This function is called from the behavior tree when it becomes a task
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);

	// Called every tick interval
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	float CurrentValue;
	float NewValue;
};
