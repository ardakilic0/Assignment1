// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseProjectile.h"

// Sets default values
AABaseProjectile::AABaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseProjectile::DealDamageTo(AActor* Damaging, float Damage)
{
}

ECollisionChannel ABaseProjectile::GetInstigatorCollisionChannel()
{
	return ECollisionChannel();
}

void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed)
{
}

void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile()
{
	return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget()
{
	return false;
}

