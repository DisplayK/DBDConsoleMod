#pragma once

#include "CoreMinimal.h"
#include "DemogorgonAnimProxy.h"
#include "Components/ActorComponent.h"
#include "DemogorgonAnimProxyComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDemogorgonAnimProxyComponent : public UActorComponent, public IDemogorgonAnimProxy
{
	GENERATED_BODY()

public:
	UDemogorgonAnimProxyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonAnimProxyComponent) { return 0; }
