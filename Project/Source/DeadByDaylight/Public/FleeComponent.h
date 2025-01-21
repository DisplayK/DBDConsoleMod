#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FleeComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFleeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AActor* _threat;

public:
	UFleeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFleeComponent) { return 0; }
