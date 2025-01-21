#pragma once

#include "CoreMinimal.h"
#include "SavedReleaseDataV8.generated.h"

USTRUCT()
struct FSavedReleaseDataV8
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FString Version;

	UPROPERTY(SaveGame)
	bool NewChapterPopupSeen;

public:
	DEADBYDAYLIGHT_API FSavedReleaseDataV8();
};

FORCEINLINE uint32 GetTypeHash(const FSavedReleaseDataV8) { return 0; }
