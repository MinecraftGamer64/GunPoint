// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GunPointGameMode.h"
#include "GunPointHUD.h"
#include "GunPointCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGunPointGameMode::AGunPointGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGunPointHUD::StaticClass();
}
