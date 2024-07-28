#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacementUpdateStrategy.h"
#include "BufferLastValidLocationObjectPlacementStrategy.generated.h"

UCLASS(EditInlineNew)
class UBufferLastValidLocationObjectPlacementStrategy : public UObjectPlacementUpdateStrategy
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceToOwner;

public:
	UBufferLastValidLocationObjectPlacementStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBufferLastValidLocationObjectPlacementStrategy) { return 0; }
