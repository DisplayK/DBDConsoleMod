#pragma once

#include "CoreMinimal.h"
#include "K26Path.generated.h"

class AK26PathPart;

USTRUCT()
struct FK26Path
{
	GENERATED_BODY()

public:
	UPROPERTY()
	AK26PathPart* PathEndArrow;

	UPROPERTY()
	TArray<AK26PathPart*> PathParts;

public:
	THEK26_API FK26Path();
};

FORCEINLINE uint32 GetTypeHash(const FK26Path) { return 0; }
