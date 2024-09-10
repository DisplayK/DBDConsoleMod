#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "GuardOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGuardOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _killerColor;

public:
	UGuardOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGuardOutlineUpdateStrategy) { return 0; }
