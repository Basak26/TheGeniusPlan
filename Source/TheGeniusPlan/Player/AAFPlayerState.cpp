// Fill out your copyright notice in the Description page of Project Settings.


#include "AAFPlayerState.h"
#include "TheGeniusPlan/GameModes/MainGame/AAFGameState.h"
#include "Net/UnrealNetwork.h"
#include "TheGeniusPlan/HUD/MainGameHUD.h"
#include "TheGeniusPlan/Player/GeniusPlayerController.h"

void AAAFPlayerState::BeginPlay()
{
	Super::BeginPlay();
	Lose = false;
}

AAAFPlayerState::AAAFPlayerState()
{
	SelectedLand = ESelectedLand::None;
}

void AAAFPlayerState::OnReq_ChangeLand()
{
	AGeniusPlayerController* Controller = Cast<AGeniusPlayerController>(GetWorld()->GetFirstPlayerController());

	if(Controller)
	{
		Controller->CheckPlayerAllSelected();
	}

}

void AAAFPlayerState::ChangeLand_Implementation(ESelectedLand Type)
{
	SelectedLand = Type;
}

void AAAFPlayerState::ResetLand()
{
	SelectedLand = ESelectedLand::None;
}

ESelectedLand AAAFPlayerState::GetSelectedLand()
{
	return SelectedLand;
}

void AAAFPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAAFPlayerState, SelectedLand);
}
