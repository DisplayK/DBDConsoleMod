#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "UnstableRiftOutlineStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUnstableRiftOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _displayColor;

public:
	UUnstableRiftOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UUnstableRiftOutlineStrategy) { return 0; }
