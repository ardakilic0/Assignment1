// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABasePowerup.generated.h"
#include "Sound/SoundCue.h"
#include "PlayerShip.h"

UCLASS()
class AABasePowerup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABasePowerup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Effects")
	USoundCue* PickUpSoundCue;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Effects")
	UParticleSystem* PickUpParticleSystem;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply(APlayerShip* PlayerShip);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();

};
