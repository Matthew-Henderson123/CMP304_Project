// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuUi.h"

//The Begin Play equivalent for the UI
void UMenuUi::NativeConstruct()
{
	Super::NativeConstruct();

	//Whenever the sliders are moved call the functions provided
	if (PlayerSpeed)
	{
		PlayerSpeed->OnValueChanged.AddDynamic(this, &UMenuUi::OnPlayerValueChange);
	}

	if (AISpeed)
	{
		AISpeed->OnValueChanged.AddDynamic(this, &UMenuUi::OnAIValueChange);
	}

	if (NextLevel)
	{
		NextLevel->OnClicked.AddDynamic(this, &UMenuUi::OnButtonHit);
	}

	GameInstance = Cast<UMyGameInstance>(GetGameInstance());

	//Incase the sliders aren't changed set the variables now
	GameInstance->SetPlayerSpeed(PlayerSpeed->GetValue());

	GameInstance->SetAISpeed(AISpeed->GetValue());
}

//Sets the variables in the game instance
void UMenuUi::OnPlayerValueChange(float Value)
{
	GameInstance->SetPlayerSpeed(Value);
}

void UMenuUi::OnAIValueChange(float Value)
{
	GameInstance->SetAISpeed(Value);
}

//When the button is pressed start the game
void UMenuUi::OnButtonHit()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Main")));
}
