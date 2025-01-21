#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkProperties.generated.h"

USTRUCT()
struct FAssignedPerkProperties
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName PerkId;

	UPROPERTY()
	int32 PerkLevel;

	UPROPERTY()
	bool IsTeachable;

public:
	DEADBYDAYLIGHT_API FAssignedPerkProperties();
};

FORCEINLINE uint32 GetTypeHash(const FAssignedPerkProperties) { return 0; }
