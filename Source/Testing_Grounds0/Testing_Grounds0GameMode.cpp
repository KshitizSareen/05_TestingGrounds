// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Testing_Grounds0.h"
#include "Testing_Grounds0GameMode.h"
#include "Testing_Grounds0HUD.h"
#include "Testing_Grounds0Character.h"

ATesting_Grounds0GameMode::ATesting_Grounds0GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATesting_Grounds0HUD::StaticClass();
}
