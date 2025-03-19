// Copyright Epic Games, Inc. All Rights Reserved.

#include "CGProjectGameMode.h"
#include "CGProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACGProjectGameMode::ACGProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
