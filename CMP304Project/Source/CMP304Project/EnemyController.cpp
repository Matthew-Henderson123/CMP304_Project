// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"

AEnemyController::AEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;
	FatigueCost = 0.01;
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();
}

//Gets called when the AI and controller connect
void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	Enemy = Cast<AAICharacter>(GetPawn());

	GameInstance = Cast<UMyGameInstance>(GetGameInstance());

	if (Enemy && Enemy->BT)
	{
		//Starts the behavior tree
		RunBehaviorTree(Enemy->BT);

		//Gets the AI's speed that was set in the menu
		if (GameInstance)
		{
			Enemy->GetCharacterMovement()->MaxWalkSpeed = GameInstance->GetAISpeed();
		}

		//Sets the speeds that will be used to make the AI sprint
		NormalSpeed = Enemy->GetCharacterMovement()->MaxWalkSpeed;
		SprintSpeed = NormalSpeed + 50;
	}
}

void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Enemy)
	{
		//When the AI is moving
		if (Enemy->GetVelocity().SizeSquared() > 0.1)
		{
			//When the AI is moving towards the player
			if (GetBlackboardComponent()->GetValueAsBool("CanSee"))
			{
				//Increase the speed and the cost of the fatigue
				FatigueCost = 0.05;
				Enemy->GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
			}
			else
			{
				//When the AI is moving
				//set the speed and the cost of the fatigue to normal
				FatigueCost = 0.01;
				Enemy->GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
			}

			//Set all the blackboard variables
			CurrentValue = GetBlackboardComponent()->GetValueAsFloat("Fatigue");
			NewValue = CurrentValue - FatigueCost;
			GetBlackboardComponent()->SetValueAsFloat("Fatigue", NewValue);
		}
	}
}