#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "ECurrencyType.h"
#include "UObject/ScriptInterface.h"
#include "ArchiveRiftSubPresenter.generated.h"

class IArchiveRiftViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UArchiveRiftSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IArchiveRiftViewInterface> _archiveRiftWidget;

private:
	UFUNCTION()
	void OnToggleOutfitDisplay();

	UFUNCTION()
	void OnRewardItemClicked(const FName itemId);

	UFUNCTION()
	void OnRewardCurrencyClicked(const ECurrencyType currencyType);

	UFUNCTION()
	void OnClickPurchaseTiers();

	UFUNCTION()
	void OnClickPurchasePremiumPass();

	UFUNCTION()
	void OnBonusTierTooltipShown();

public:
	UArchiveRiftSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveRiftSubPresenter) { return 0; }
