// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsUI.h"

void UStatsUI::NativeConstruct()
{
	//Gets reference to the game instance
	GameInstance = Cast<UMyGameInstance>(GetGameInstance());

	//Finds the number of AI wins and displays it on the UI
	UIWins->SetText(FText::AsNumber(3 - GameInstance->GetPlayerWins()));
}
