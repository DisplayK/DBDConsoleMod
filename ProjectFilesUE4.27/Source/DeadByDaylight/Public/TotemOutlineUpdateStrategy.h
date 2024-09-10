#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "TotemOutlineUpdateStrategy.generated.h"

class UCurveLinearColor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTotemOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedColorToSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _boonTotemRevealedColorToSurvivor;

	UPROPERTY(EditDefaultsOnly)
	UCurveLinearColor* _revealedColorToKiller;

public:
	UFUNCTION()
	FLinearColor GetRevealColorToSurvivor() const;

public:
	UTotemOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTotemOutlineUpdateStrategy) { return 0; }
