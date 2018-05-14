// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "Testing_Grounds0HUD.generated.h"

UCLASS()
class ATesting_Grounds0HUD : public AHUD
{
	GENERATED_BODY()

public:
	ATesting_Grounds0HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

