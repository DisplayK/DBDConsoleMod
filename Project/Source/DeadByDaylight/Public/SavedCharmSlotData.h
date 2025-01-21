#pragma once

#include "CoreMinimal.h"
#include "SavedCharmSlotData.generated.h"

USTRUCT()
struct FSavedCharmSlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	int8 SlotIndex;

	UPROPERTY(SaveGame)
	FName CharmId;

public:
	DEADBYDAYLIGHT_API FSavedCharmSlotData();
};

FORCEINLINE uint32 GetTypeHash(const FSavedCharmSlotData) { return 0; }
