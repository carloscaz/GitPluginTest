// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitPluginTestGameMode.h"
#include "GitPluginTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitPluginTestGameMode::AGitPluginTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
