// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BengHouseGameMode.h"
#include "BengHousePlayerController.h"
#include "BengHouseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABengHouseGameMode::ABengHouseGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABengHousePlayerController::StaticClass();

}