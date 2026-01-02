// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_FindPlayer.h"

UBTService_FindPlayer::UBTService_FindPlayer()
{
	NodeName = "Get Player Actor";
}

void UBTService_FindPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    //Set the player to the blackboard variables every interval
    OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}