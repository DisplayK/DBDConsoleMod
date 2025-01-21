#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "MeatHookOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMeatHookOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor HookedOutlineColorSlasher;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor CarryingOutlineColorSlasher;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor DefaultOutlineColorSlasher;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor VisibleOutlineColorCamper;

private:
	UFUNCTION()
	void Local_AddBasementOfferingReveal();

	UFUNCTION()
	void Authority_AddBasementHookToPlayerMapItem();

public:
	UMeatHookOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UMeatHookOutlineUpdateStrategy) { return 0; }
