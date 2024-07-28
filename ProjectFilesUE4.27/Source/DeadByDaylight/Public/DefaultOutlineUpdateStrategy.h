#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DefaultOutlineUpdateStrategy.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDefaultOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedColorToSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedColorToKiller;

public:
	UDefaultOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDefaultOutlineUpdateStrategy) { return 0; }
