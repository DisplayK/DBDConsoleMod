#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "LockerOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULockerOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	FLinearColor GetRedColor() const;

public:
	ULockerOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULockerOutlineUpdateStrategy) { return 0; }
