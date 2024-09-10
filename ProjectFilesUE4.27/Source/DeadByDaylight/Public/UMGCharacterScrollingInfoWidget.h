#pragma once

#include "CoreMinimal.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "UMGCharacterScrollingInfoWidget.generated.h"

class UUMGTeachablePerkButton;
class UTextBlock;
class UUMGInventoryItemButton;
class UCanvasPanel;
class UUMGHtmlRichText;

UCLASS(EditInlineNew)
class UUMGCharacterScrollingInfoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTeachablePerkButton* FirstTeachablePerk;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTeachablePerkButton* SecondTeachablePerk;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTeachablePerkButton* ThirdTeachablePerk;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* KillerInfoPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGInventoryItemButton* KillerPower;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* CharacterBackstoryBox;

	UPROPERTY(BlueprintReadOnly)
	FText _killerPowerName;

	UPROPERTY(BlueprintReadOnly)
	FText _killerSpeedText;

	UPROPERTY(BlueprintReadOnly)
	FText _killerTerrorRadiusText;

	UPROPERTY(BlueprintReadOnly)
	FText _killerHeightText;

	UPROPERTY(BlueprintReadOnly)
	FText _perksTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _teachablesTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _powerTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _attributesTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* FirstTeachablePerkText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* SecondTeachablePerkText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ThirdTeachablePerkText;

	UPROPERTY(BlueprintReadOnly)
	FText _backStoryTitle;

private:
	UPROPERTY(Transient, Export)
	TArray<UUMGTeachablePerkButton*> _teachablePerkArray;

	UPROPERTY(Transient, Export)
	TArray<UTextBlock*> _teachablePerkNameArray;

	UPROPERTY()
	FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredEvent;

	UPROPERTY()
	FOnLoadoutItemButtonLongPressEvent _onPowerButtonTooltipLongPressEvent;

private:
	UFUNCTION()
	void HandleTooltipLongPressedKillerPowerEvent(const FInventorySlotData& itemData, FVector2D position);

	UFUNCTION()
	void HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);

public:
	UUMGCharacterScrollingInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterScrollingInfoWidget) { return 0; }
