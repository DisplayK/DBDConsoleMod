#pragma once

#include "CoreMinimal.h"
#include "OutputActorOwner.generated.h"

class AActor;

USTRUCT()
struct FOutputActorOwner
{
	GENERATED_BODY()

private:
	UPROPERTY(NonTransactional)
	AActor* OutputActor;

public:
	HOUDINIENGINERUNTIME_API FOutputActorOwner();
};

FORCEINLINE uint32 GetTypeHash(const FOutputActorOwner) { return 0; }
