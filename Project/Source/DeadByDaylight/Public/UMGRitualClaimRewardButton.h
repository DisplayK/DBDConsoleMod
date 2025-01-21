#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGRitualClaimRewardButton.generated.h"

class UCanvasPanel;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRitualClaimRewardButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedAnimationCompleted);

public:
	UPROPERTY(BlueprintAssignable)
	FOnPressedAnimationCompleted OnPressedAnimationCompleted;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ClaimFxPanel;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetClaimedButtonStatus(bool isClaimed, float percent);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnPressedAnimationCompleted();

public:
	UUMGRitualClaimRewardButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRitualClaimRewardButton) { return 0; }
