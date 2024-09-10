#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DrawPortalComponent.generated.h"

UCLASS(MinimalAPI, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDrawPortalComponent : public UPrimitiveComponent
{
	GENERATED_BODY()

public:
	UDrawPortalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDrawPortalComponent) { return 0; }
