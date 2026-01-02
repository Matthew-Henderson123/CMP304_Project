// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

UMyGameInstance::UMyGameInstance()
{

}

void UMyGameInstance::AddPlayerWin()
{
	PlayerWins++;
}

int32 UMyGameInstance::GetPlayerWins()
{
	return PlayerWins;
}

void UMyGameInstance::SetPlayerSpeed(float NewSpeed)
{
	PlayerSpeed = NewSpeed;
}

float UMyGameInstance::GetPlayerSpeed()
{
	return PlayerSpeed;
}

void UMyGameInstance::SetAISpeed(float NewSpeed)
{
	AISpeed = NewSpeed;
}

float UMyGameInstance::GetAISpeed()
{
	return AISpeed;
}