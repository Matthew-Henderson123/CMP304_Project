// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Slider.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "MenuUi.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API UMenuUi : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnPlayerValueChange(float Value);

	UFUNCTION()
	void OnAIValueChange(float Value);

	UFUNCTION()
	void OnButtonHit();

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	USlider* PlayerSpeed;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	USlider* AISpeed;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* NextLevel;

	UMyGameInstance* GameInstance;
};
