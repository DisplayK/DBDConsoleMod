#pragma once

#include "CoreMinimal.h"
#include "MindFocusObjectEntry.generated.h"

class UObject;

USTRUCT()
struct FMindFocusObjectEntry
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<UObject*> FocusedBy;

	UPROPERTY()
	float FocusedStartTime;

	UPROPERTY()
	TMap<FName, float> CooldownMap;

public:
	DBDBOTS_API FMindFocusObjectEntry();
};

FORCEINLINE uint32 GetTypeHash(const FMindFocusObjectEntry) { return 0; }
