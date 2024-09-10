#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlotData.h"
#include "UMGCharacterInfoWidget.generated.h"

class UScrollBox;
class UImage;
class UUMGCharacterScrollingInfoWidget;
class UCanvasPanel;
class UTextBlock;

UCLASS(EditInlineNew)
class UUMGCharacterInfoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScrollBox* CharacterInfoScrollBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterScrollingInfoWidget* CharacterScrollingInfoWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* CharacterDLCPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CharacterBackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FText _characterDifficultyText;

	UPROPERTY(BlueprintReadOnly)
	FString _characterDLCText;

	UPROPERTY(BlueprintReadOnly)
	bool _isKiller;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor _easyColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor _intermediaryColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor _hardColor;

	UPROPERTY(BlueprintReadOnly)
	FSlateColor _currentColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FText _characterDLCTitle;

private:
	UPROPERTY()
	FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;

	UPROPERTY()
	FOnLoadoutItemButtonLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;

private:
	UFUNCTION()
	void HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);

	UFUNCTION()
	void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);

public:
	UUMGCharacterInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterInfoWidget) { return 0; }
