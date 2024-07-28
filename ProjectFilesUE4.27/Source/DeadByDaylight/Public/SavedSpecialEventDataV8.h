#pragma once

#include "CoreMinimal.h"
#include "SavedSpecialEventDataV8.generated.h"

USTRUCT()
struct FSavedSpecialEventDataV8
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName EventId;

	UPROPERTY(SaveGame)
	bool SeenIntro;

	UPROPERTY(SaveGame)
	bool SeenOutro;

	UPROPERTY(SaveGame)
	bool EventEntryScreenOpened;

	UPROPERTY(SaveGame)
	bool EventSplashScreenSeen;

public:
	DEADBYDAYLIGHT_API FSavedSpecialEventDataV8();
};

FORCEINLINE uint32 GetTypeHash(const FSavedSpecialEventDataV8) { return 0; }
