#pragma once

#include "CoreMinimal.h"
#include "SignificanceStrategy.h"
#include "PerPlatformProperties.h"
#include "DBDSignificanceStrategy.generated.h"

UCLASS(EditInlineNew)
class UDBDSignificanceStrategy : public USignificanceStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _farDistance;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _auraRevealedMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _auraRevealedMinimumSignificance;

public:
	UDBDSignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSignificanceStrategy) { return 0; }
