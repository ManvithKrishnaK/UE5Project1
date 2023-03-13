// Copyright Epic Games, Inc. All Rights Reserved.

#include "AntManGameMode.h"
#include "AntManCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAntManGameMode::AAntManGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
