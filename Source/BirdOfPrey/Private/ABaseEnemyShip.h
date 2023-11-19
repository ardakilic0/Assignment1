// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "ABaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class AABaseEnemyShip : public ABaseGameAgent
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseShipAIController* ShipAIController;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();
	
};
