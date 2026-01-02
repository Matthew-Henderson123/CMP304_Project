// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CMP304PROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	public:

        //Game instance stores variables that you want to be accessable throughout the game and never reset to default when a new level is called
        UMyGameInstance();

        //Creates all the varibles that need to be accessed and changed throughout the levels
        UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game Data")
        int32 PlayerWins;

        UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game Data")
        float PlayerSpeed;

        UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game Data")
        float AISpeed;

        //Creates all the getters and setters for the variables
        UFUNCTION(BlueprintCallable, Category = "Game Data")
        void AddPlayerWin();

        UFUNCTION(BlueprintCallable, Category = "Game Data")
        int32 GetPlayerWins();

        UFUNCTION(BlueprintCallable, Category = "Game Data")
        void SetPlayerSpeed(float NewSpeed);

        UFUNCTION(BlueprintCallable, Category = "Game Data")
        float GetPlayerSpeed();

        UFUNCTION(BlueprintCallable, Category = "Game Data")
        void SetAISpeed(float NewSpeed);

        UFUNCTION(BlueprintCallable, Category = "Game Data")
        float GetAISpeed();
};
