// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Rest.h"

UBT_Rest::UBT_Rest()
{
	NodeName = "Rest Till Full";
	bNotifyTick = true;
}

EBTNodeResult::Type UBT_Rest::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Stops the task from ending till the fatigue is set to max
	return EBTNodeResult::InProgress;
}

void UBT_Rest::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	//Increases the fatigue until it reaches its max then succeed the task
	CurrentValue = OwnerComp.GetBlackboardComponent()->GetValueAsFloat("Fatigue");
	NewValue = CurrentValue += 0.1;
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat("Fatigue", NewValue);

	if (OwnerComp.GetBlackboardComponent()->GetValueAsFloat("Fatigue") >= 50)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
