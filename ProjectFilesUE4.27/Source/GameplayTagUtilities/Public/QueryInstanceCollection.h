#pragma once

#include "CoreMinimal.h"
#include "QueryInstanceCollection.generated.h"

class UTagContainerQueryInstance;

USTRUCT()
struct FQueryInstanceCollection
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<UTagContainerQueryInstance*> Instances;

public:
	GAMEPLAYTAGUTILITIES_API FQueryInstanceCollection();
};

FORCEINLINE uint32 GetTypeHash(const FQueryInstanceCollection) { return 0; }
