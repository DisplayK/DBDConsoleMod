#pragma once

#include "CoreMinimal.h"
#include "ArchiveRiftTierItemClicked.h"
#include "Blueprint/UserWidget.h"
#include "ArchiveRiftTierItemUnlockAnimationComplete.h"
#include "ArchiveRiftTierRewardsViewData.h"
#include "CoreArchiveRiftTierItem.generated.h"

class UGridPanel;
class UAkAudioEvent;
class UCoreRewardWrapperWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveRiftTierItem : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FArchiveRiftTierItemClicked _itemClickedDelegate;

	UPROPERTY()
	FArchiveRiftTierItemUnlockAnimationComplete _unlockAnimationCompleteDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UGridPanel* FreeRewardsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UGridPanel* PremiumRewardsContainer;

	UPROPERTY(BlueprintReadWrite, Transient, Export)
	TArray<UCoreRewardWrapperWidget*> _freeRewardWidgets;

	UPROPERTY(BlueprintReadWrite, Transient, Export)
	TArray<UCoreRewardWrapperWidget*> _premiumRewardWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAkAudioEvent* _unlockAnimationCompleteSound;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetLockedState(const bool isLocked, const bool hasPremium);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetGenericData(const FArchiveRiftTierRewardsViewData& data);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void PlayUnlockanimation(bool isPremiumUnlocked, float delay);

protected:
	UFUNCTION()
	void OnRewardClicked(UCoreButtonWidget* button);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void Clear();

public:
	UCoreArchiveRiftTierItem();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveRiftTierItem) { return 0; }
