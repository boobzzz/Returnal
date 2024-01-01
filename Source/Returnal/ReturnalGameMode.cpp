// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReturnalGameMode.h"
#include "ReturnalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReturnalGameMode::AReturnalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
