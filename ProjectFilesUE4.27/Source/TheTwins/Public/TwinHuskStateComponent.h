#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TwinHuskStateComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UTwinHuskStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool IsDeadFromSurvivorBack() const;

public:
	UTwinHuskStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinHuskStateComponent) { return 0; }
