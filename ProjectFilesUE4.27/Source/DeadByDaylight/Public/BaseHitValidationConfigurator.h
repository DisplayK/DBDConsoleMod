#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseHitValidationConfigurator.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UBaseHitValidationConfigurator : public UActorComponent
{
	GENERATED_BODY()

public:
	UBaseHitValidationConfigurator();
};

FORCEINLINE uint32 GetTypeHash(const UBaseHitValidationConfigurator) { return 0; }
