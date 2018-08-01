// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKPROJECT_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

private:
	ATank* GetControllerTank() const;
	bool GetSightRayHitLocation(FVector&) const;
	void AimTowardsCrosshair();
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
