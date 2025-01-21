#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EdgeObjectHandlingStrategy.generated.h"

class UActorSpawner;

UCLASS()
class UEdgeObjectHandlingStrategy : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UActorSpawner*> _edgeObjectSpawners;

	UPROPERTY(Transient, Export)
	TArray<UActorSpawner*> _edgeObjectBlockers;

public:
	UEdgeObjectHandlingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UEdgeObjectHandlingStrategy) { return 0; }
