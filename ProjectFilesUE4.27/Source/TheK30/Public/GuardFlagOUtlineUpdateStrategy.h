#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "GuardFlagOUtlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGuardFlagOUtlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _killerColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _survivorColor;

public:
	UGuardFlagOUtlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGuardFlagOUtlineUpdateStrategy) { return 0; }
