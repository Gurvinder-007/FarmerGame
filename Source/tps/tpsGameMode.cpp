// Copyright Epic Games, Inc. All Rights Reserved.

#include "tpsGameMode.h"
#include "tpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtpsGameMode::AtpsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
