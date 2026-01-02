// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyController.h"
#include "NavigationSystem.h"
#include "BT_FindRandPos.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API UBT_FindRandPos : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBT_FindRandPos();

	//This function is called from the behavior tree when it becomes a task
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);

private:
	
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category="AI", meta=(AllowPrivateAccess = "true"))
	float Radius = 1000.f;
};
