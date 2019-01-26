// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BengHouseCharacter.generated.h"

UCLASS(Blueprintable)
class ABengHouseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABengHouseCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

private:
	
};

