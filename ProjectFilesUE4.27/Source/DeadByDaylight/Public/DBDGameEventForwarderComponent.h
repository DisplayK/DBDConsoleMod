#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDGameEventForwarderComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDGameEventForwarderComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDBDGameEventForwarderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDGameEventForwarderComponent) { return 0; }
