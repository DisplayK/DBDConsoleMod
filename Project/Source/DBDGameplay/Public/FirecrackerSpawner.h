#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "FirecrackerSpawner.generated.h"

UCLASS()
class AFirecrackerSpawner : public ABaseCamperCollectable
{
	GENERATED_BODY()

public:
	AFirecrackerSpawner();
};

FORCEINLINE uint32 GetTypeHash(const AFirecrackerSpawner) { return 0; }
