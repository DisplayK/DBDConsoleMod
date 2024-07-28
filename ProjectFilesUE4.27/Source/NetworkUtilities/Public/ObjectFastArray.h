#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ObjectFastArrayEntry.h"
#include "ObjectFastArray.generated.h"

USTRUCT(BlueprintType)
struct FObjectFastArray: public FFastArraySerializer
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<FObjectFastArrayEntry> Objects;

public:
	NETWORKUTILITIES_API FObjectFastArray();
};

FORCEINLINE uint32 GetTypeHash(const FObjectFastArray) { return 0; }
