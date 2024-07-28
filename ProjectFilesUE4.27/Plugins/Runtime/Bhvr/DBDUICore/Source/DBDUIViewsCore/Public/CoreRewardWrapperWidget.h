#pragma once

#include "CoreMinimal.h"
#include "RewardWrapperViewData.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreRewardWrapperWidget.generated.h"

class UCoreCharacterRewardWidget;
class UCoreCustomizationRewardWidget;
class UPanelWidget;
class UCoreCurrencyProgressionRewardWidget;
class UCoreRewardWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreRewardWrapperWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreCharacterRewardWidget> CharacterRewardWidget;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreCurrencyProgressionRewardWidget> CurrencyProgressionRewardWidget;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreCustomizationRewardWidget> CustomizationRewardWidget;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPanelWidget* RewardContainer;

private:
	UPROPERTY(Transient, Export)
	UCoreRewardWidget* _rewardWidget;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsLocked(bool isLocked, bool playAnimation);

	UFUNCTION(BlueprintCallable)
	void SetIsClickable(bool isClickable);

	UFUNCTION(BlueprintCallable)
	void SetData(const FRewardWrapperViewData& viewData);

	UFUNCTION(BlueprintCallable)
	UCoreRewardWidget* GetRewardWidget();

	UFUNCTION(BlueprintCallable)
	void ClearData();

public:
	UCoreRewardWrapperWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreRewardWrapperWidget) { return 0; }
