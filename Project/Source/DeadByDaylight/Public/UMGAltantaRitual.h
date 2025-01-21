#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaRitualUIData.h"
#include "UMGAltantaRitual.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGAltantaRitual : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FText _claimText;

	UPROPERTY(BlueprintReadOnly)
	FText _claimedText;

	UPROPERTY(BlueprintReadOnly)
	FText _completedText;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetData(const FAtlantaRitualUIData& ritual);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnClaimRewardsButtonPressed(const int32 ritualId);

public:
	UUMGAltantaRitual();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAltantaRitual) { return 0; }
