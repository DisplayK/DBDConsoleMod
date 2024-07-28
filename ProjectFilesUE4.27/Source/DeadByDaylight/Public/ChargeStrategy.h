#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChargeStrategy.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UChargeStrategy : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _shouldApplyRedirectedChargeNormally;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldBroadcastChargeApplied;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldApplyModifiersToRedirectedCharge;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldAllowChargeFromItem;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldRedirectSkillcheckChargePenalty;

public:
	UChargeStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UChargeStrategy) { return 0; }
