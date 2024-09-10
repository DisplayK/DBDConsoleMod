#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "EscapeOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEscapeOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _doorOpenColorForSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _doorOpenColorForKiller;

public:
	UEscapeOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeOutlineUpdateStrategy) { return 0; }
