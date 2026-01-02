// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTService_FindPlayer.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API UBTService_FindPlayer : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
	UBTService_FindPlayer();

protected:
	// Called every tick interval
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
