#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDAggregateParticleManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDAggregateParticleManager : public AActor
{
	GENERATED_BODY()

public:
	ADBDAggregateParticleManager();
};

FORCEINLINE uint32 GetTypeHash(const ADBDAggregateParticleManager) { return 0; }
