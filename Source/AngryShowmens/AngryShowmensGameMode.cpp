// Copyright Epic Games, Inc. All Rights Reserved.

#include "AngryShowmensGameMode.h"
#include "AngryShowmensHUD.h"
#include "AngryShowmensCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAngryShowmensGameMode::AAngryShowmensGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAngryShowmensHUD::StaticClass();
}
