#pragma once

#include "CoreMinimal.h"
#include "VoidEnergyProducer.h"
#include "VoidEnergyMeatHookComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UVoidEnergyMeatHookComponent : public UVoidEnergyProducer
{
	GENERATED_BODY()

public:
	UVoidEnergyMeatHookComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyMeatHookComponent) { return 0; }
