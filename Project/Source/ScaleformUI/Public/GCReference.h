#pragma once

#include "CoreMinimal.h"
#include "GCReference.generated.h"

class UObject;

USTRUCT()
struct FGCReference
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UObject* Object;

	UPROPERTY()
	int32 RefCount;

public:
	SCALEFORMUI_API FGCReference();
};

FORCEINLINE uint32 GetTypeHash(const FGCReference) { return 0; }
