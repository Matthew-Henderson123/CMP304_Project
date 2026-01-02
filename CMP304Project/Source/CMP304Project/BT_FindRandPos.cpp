// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_FindRandPos.h"

UBT_FindRandPos::UBT_FindRandPos()
{
	//Sets the name of the task
	NodeName = "Find Random Location";
}

EBTNodeResult::Type UBT_FindRandPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AEnemyController* Controller = Cast<AEnemyController>(OwnerComp.GetAIOwner()))
	{
		if (APawn* Enemy = Controller->GetPawn())
		{
			const FVector Origin = Enemy->GetActorLocation();

			//Finds a random location within the navigation mesh that the AI can move to
			if (UNavigationSystemV1* NavMesh = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Location;
				if (NavMesh->GetRandomPointInNavigableRadius(Origin, Radius, Location))
				{
					//Sets the random loaction in the blackboard then succeed the task
					OwnerComp.GetBlackboardComponent()->SetValueAsVector("RandomPos", Location.Location);

					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

					return EBTNodeResult::Succeeded;
				}
			}
		}
	}
	return EBTNodeResult::Failed;
}
