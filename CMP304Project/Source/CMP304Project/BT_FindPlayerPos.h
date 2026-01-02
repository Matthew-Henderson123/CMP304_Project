// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BT_FindPlayerPos.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API UBT_FindPlayerPos : public UBTTaskNode
{
	GENERATED_BODY()
	
	UBT_FindPlayerPos();

	//This function is called from the behavior tree when it becomes a task
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
