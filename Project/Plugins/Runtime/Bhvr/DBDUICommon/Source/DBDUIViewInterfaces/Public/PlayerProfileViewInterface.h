#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ECurrencyType.h"
#include "CurrencyLabelViewData.h"
#include "PlayerProfileViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerProfileViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerProfileViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateWallet(const ECurrencyType type, int32 newBalance, int32 previousBalance);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWallet(const TArray<FCurrencyLabelViewData>& walletData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPlayerName(const FText& playerNameText);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HideWallet();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HidePlayerRank();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HidePlayerName();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HidePlayerLevel();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FullUpdateCurrency(const FCurrencyLabelViewData& viewData);

};
