#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkPropertiesV7.generated.h"

USTRUCT()
struct FAssignedPerkPropertiesV7
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName PerkId;

	UPROPERTY(SaveGame)
	int32 PerkLevel;

	UPROPERTY(SaveGame)
	bool IsTeachable;

public:
	DEADBYDAYLIGHT_API FAssignedPerkPropertiesV7();
};

FORCEINLINE uint32 GetTypeHash(const FAssignedPerkPropertiesV7) { return 0; }
