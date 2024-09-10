#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BasePerkIconStrategy.generated.h"

class UPerk;

UCLASS(BlueprintType, Abstract)
class DEADBYDAYLIGHT_API UBasePerkIconStrategy : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool GetIsRechargeableActive(const UPerk* perk) const;

	UFUNCTION(BlueprintPure)
	bool GetIsRechargeable(const UPerk* perk) const;

	UFUNCTION(BlueprintPure)
	float GetDisplayPercent(const UPerk* perk) const;

public:
	UBasePerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBasePerkIconStrategy) { return 0; }
