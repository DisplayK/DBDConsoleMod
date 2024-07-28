#pragma once

#include "CoreMinimal.h"
#include "ReleaseSavedData.generated.h"

USTRUCT()
struct FReleaseSavedData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool NewChapterPopupSeen;

public:
	DEADBYDAYLIGHT_API FReleaseSavedData();
};

FORCEINLINE uint32 GetTypeHash(const FReleaseSavedData) { return 0; }
