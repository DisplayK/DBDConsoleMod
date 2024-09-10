#pragma once

#include "CoreMinimal.h"
#include "SerializablePlayerPerks.generated.h"

USTRUCT()
struct FSerializablePlayerPerks
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TMap<FName, int32> Perks;

public:
	DBDANALYTICS_API FSerializablePlayerPerks();
};

FORCEINLINE uint32 GetTypeHash(const FSerializablePlayerPerks) { return 0; }
