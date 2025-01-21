#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LegacySavedBloodWebRingPersistentData.h"
#include "LegacySavedBloodWebPersistentData.generated.h"

USTRUCT()
struct FLegacySavedBloodWebPersistentData
{
	GENERATED_BODY()

public:
	UPROPERTY(NoClear, SaveGame)
	int32 VersionNumber;

	UPROPERTY(SaveGame)
	int32 Level;

	UPROPERTY(SaveGame)
	TArray<FLegacySavedBloodWebRingPersistentData> RingData;

	UPROPERTY(SaveGame)
	TArray<FName> Paths;

	UPROPERTY(SaveGame)
	FString EntityCurrentNode;

	UPROPERTY(SaveGame)
	FDateTime GenerationDate;

public:
	DEADBYDAYLIGHT_API FLegacySavedBloodWebPersistentData();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedBloodWebPersistentData) { return 0; }
