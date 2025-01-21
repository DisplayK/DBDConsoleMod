#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "GeneratorOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGeneratorOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _unrepairedAuraColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _fullyRepairedAuraColor;

public:
	UFUNCTION(BlueprintPure)
	FLinearColor GetYellowColor() const;

	UFUNCTION(BlueprintPure)
	FLinearColor GetWhiteColor() const;

public:
	UGeneratorOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorOutlineUpdateStrategy) { return 0; }
