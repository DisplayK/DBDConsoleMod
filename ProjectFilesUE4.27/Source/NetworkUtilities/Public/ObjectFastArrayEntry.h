#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ObjectFastArrayEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FObjectFastArrayEntry: public FFastArraySerializerItem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UObject* Object;

public:
	NETWORKUTILITIES_API FObjectFastArrayEntry();
};

FORCEINLINE uint32 GetTypeHash(const FObjectFastArrayEntry) { return 0; }
