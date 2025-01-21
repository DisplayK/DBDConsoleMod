#pragma once

#include "CoreMinimal.h"
#include "TerrorRadiusEmitterComponent.h"
#include "SlasherTREmitterComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherTREmitterComponent : public UTerrorRadiusEmitterComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetBaseTerrorRadius(float baseTerrorRadius, const bool progressive);

public:
	USlasherTREmitterComponent();
};

FORCEINLINE uint32 GetTypeHash(const USlasherTREmitterComponent) { return 0; }
