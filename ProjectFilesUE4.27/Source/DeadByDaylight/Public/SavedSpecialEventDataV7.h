#pragma once

#include "CoreMinimal.h"
#include "SavedSpecialEventDataV7.generated.h"

USTRUCT()
struct FSavedSpecialEventDataV7
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName EventId;

	UPROPERTY(SaveGame)
	TArray<int32> SeenCinematics;

	UPROPERTY(SaveGame)
	bool EventEntryScreenOpened;

public:
	DEADBYDAYLIGHT_API FSavedSpecialEventDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedSpecialEventDataV7) { return 0; }
