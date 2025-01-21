#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "KillerIsLowOnAmmo.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerIsLowOnAmmo : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _ammoThreshold;

public:
	UKillerIsLowOnAmmo();
};

FORCEINLINE uint32 GetTypeHash(const UKillerIsLowOnAmmo) { return 0; }
