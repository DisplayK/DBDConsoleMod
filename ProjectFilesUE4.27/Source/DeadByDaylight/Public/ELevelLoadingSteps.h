#pragma once

#include "CoreMinimal.h"
#include "ELevelLoadingSteps.generated.h"

UENUM(BlueprintType)
enum class ELevelLoadingSteps : uint8
{
	Invalid,
	WaitingForPlayersToBeSpawned,
	WaitingForAIPawnToBeSpawned,
	WaitingForAssetPreloader,
	WaitingForLoadoutAndTheme,
	WaitingForPIAToBeSpawnedAndInitialized,
	WaitingForNavmeshComputationToStart,
	WaitingForNavmeshComputationToFinish,
	SetGameLoadedAndReadyToPlay,
	WaitingForIntroToBeDone,
	LoadingCompleted,
	FirstLoadingStep = 1,
};
