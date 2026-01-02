// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_FindPlayerPos.h"

UBT_FindPlayerPos::UBT_FindPlayerPos()
{
	//Sets the name of the task
	NodeName = "Find Last Known Player Location";
}

EBTNodeResult::Type UBT_FindPlayerPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Finds the players location and sets it to the blackboard and then succeed the task
	OwnerComp.GetBlackboardComponent()->SetValueAsVector("LastPlayerPos", GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation());

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
