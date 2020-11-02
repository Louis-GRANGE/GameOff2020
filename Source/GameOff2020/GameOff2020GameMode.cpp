// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameOff2020GameMode.h"
#include "GameOff2020PlayerController.h"
#include "GameOff2020Character.h"
#include "UObject/ConstructorHelpers.h"

AGameOff2020GameMode::AGameOff2020GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGameOff2020PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}