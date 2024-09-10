#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSlotData.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EBarColor.h"
#include "UMGChargeableInteractionWidget.generated.h"

class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGChargeableInteractionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility InteractionIconVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ItemChargeVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility InteractionHudVisibility;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetSecondaryMessage(const FString& secondMessage);

	UFUNCTION(BlueprintImplementableEvent)
	void SetProgressbarValue(float value);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetProgressBarColor(const EBarColor barColor);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetProficiencyData(int32 index, const FStatusEffectSlotData& proficiencyData);

	UFUNCTION(BlueprintImplementableEvent)
	void SetOpacity(float opacity);

	UFUNCTION(BlueprintImplementableEvent)
	void SetMessage(const FString& message);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItemChargeValue(float value);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetItemChargeColor(const EBarColor barColor);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ClearProficienciesData();

public:
	UUMGChargeableInteractionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGChargeableInteractionWidget) { return 0; }
