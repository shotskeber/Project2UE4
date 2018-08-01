// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ATank* PossesedTank = GetControllerTank();
	if (PossesedTank) {
		UE_LOG(LogTemp, Warning, TEXT("Possesed Tank : %s"), *(PossesedTank->GetName()));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Tank Possesed"));
	}
}

ATank* ATankPlayerController::GetControllerTank() const {
	return Cast<ATank>(GetPawn());
}