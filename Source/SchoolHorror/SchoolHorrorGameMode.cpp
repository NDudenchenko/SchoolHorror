// Copyright Epic Games, Inc. All Rights Reserved.

#include "SchoolHorrorGameMode.h"
#include "SchoolHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASchoolHorrorGameMode::ASchoolHorrorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
