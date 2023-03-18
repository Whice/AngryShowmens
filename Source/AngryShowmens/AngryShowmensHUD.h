// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AngryShowmensHUD.generated.h"

UCLASS()
class AAngryShowmensHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAngryShowmensHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

