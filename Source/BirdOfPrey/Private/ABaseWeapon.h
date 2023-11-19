// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseWeapon.generated.h"
#include "Sound/SoundCue.h"

UCLASS()
class AABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsAutomatic;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Effects")
	UParticleSystem* FireParticleEffect;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Effects")
	USoundCue* FireSoundCue;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasFinishedFiring();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsFiring();

};
