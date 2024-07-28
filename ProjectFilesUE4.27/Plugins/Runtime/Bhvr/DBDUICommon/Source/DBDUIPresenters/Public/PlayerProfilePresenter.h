#pragma once

#include "CoreMinimal.h"
#include "ESpecialEventStatus.h"
#include "Presenter.h"
#include "CombinedSpecialEventData.h"
#include "Templates/SubclassOf.h"
#include "ShopWalletUpdate.h"
#include "PlayerProfilePresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UPlayerProfilePresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CorePlayerProfileWidgetClass;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Filter;

private:
	UFUNCTION()
	void RefreshWallet();

	UFUNCTION()
	void OnWalletUpdated(const TArray<FShopWalletUpdate>& walletUpdates);

	UFUNCTION()
	void OnCurrentSpecialEventChanged(const FCombinedSpecialEventData& previousSpecialEvent, ESpecialEventStatus previousSpecialEventStatus, const FCombinedSpecialEventData& currentSpecialEvent, ESpecialEventStatus currentSpecialEventStatus);

	UFUNCTION()
	FText GetPlayerName();

public:
	UPlayerProfilePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerProfilePresenter) { return 0; }
