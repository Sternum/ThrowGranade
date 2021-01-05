// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThrowGranadeGameMode.h"
#include "ThrowGranadeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThrowGranadeGameMode::AThrowGranadeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
