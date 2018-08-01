// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	ATank* TargetTank = GetPlayerTank();
	if (TargetTank) {
		UE_LOG(LogTemp, Warning, TEXT("Target player found : %s"), *(TargetTank->GetName()));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No player tank found"));
	}
}

ATank * ATankAIController::GetPlayerTank() const
{
	APlayerController* playerTank = GetWorld()->GetFirstPlayerController();
	if (!playerTank) {
		return nullptr;
	}
	return Cast<ATank>(playerTank);
}

ATank* ATankAIController::GetControllerTank() const {
	return Cast<ATank>(GetPawn());
}


