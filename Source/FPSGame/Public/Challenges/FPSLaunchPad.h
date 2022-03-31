// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSLaunchPad.generated.h"

class UBoxComponent;

UCLASS()
class FPSGAME_API AFPSLaunchPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSLaunchPad();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UBoxComponent* BoxCollision;
	
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* BasePlate;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* Arrow;

	UPROPERTY(EditInstanceOnly, Category = "Launch")
	float LaunchStrength;

	UPROPERTY(EditInstanceOnly, Category = "Launch")
	float LaunchAngle;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	UParticleSystem* LaunchFX;
	
	UFUNCTION()
	void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
