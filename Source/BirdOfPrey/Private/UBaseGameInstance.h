// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameInstance.h"
#include "UBaseGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UUBaseGameInstance : public UBaseGameInstance
{
	GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo& info);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo& GetPlayerAgentInfoFor(int PlayerControllerID, bool& Result);
};
