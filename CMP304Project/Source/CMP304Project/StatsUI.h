// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "MyGameInstance.h"
#include "StatsUI.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API UStatsUI : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* UIWins;

	UMyGameInstance* GameInstance;
};
