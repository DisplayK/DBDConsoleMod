#pragma once

#include "CoreMinimal.h"
#include "ArrayOfATile.generated.h"

class ATile;

USTRUCT()
struct FArrayOfATile
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<ATile*> ArrayOfTiles;

public:
	DEADBYDAYLIGHT_API FArrayOfATile();
};

FORCEINLINE uint32 GetTypeHash(const FArrayOfATile) { return 0; }
