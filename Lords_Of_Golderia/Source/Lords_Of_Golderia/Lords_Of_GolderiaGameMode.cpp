// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lords_Of_GolderiaGameMode.h"
#include "Lords_Of_GolderiaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALords_Of_GolderiaGameMode::ALords_Of_GolderiaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
