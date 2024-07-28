#pragma once

#include "CoreMinimal.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnButtonClickEvent.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "InventorySlotData.h"
#include "UObject/SoftObjectPtr.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "UObject/NoExportTypes.h"
#include "UMGCharacterInfoScreen.generated.h"

class UCanvasPanel;
class UUMGCharacterInfoWidget;
class UUMGPopupButton;

UCLASS(Abstract, EditInlineNew)
class UUMGCharacterInfoScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ContentPanel;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGCharacterInfoWidget> SurvivorInfoWidgetClass;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGCharacterInfoWidget> KillerInfoWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGPopupButton* ProgressionButton;

private:
	UPROPERTY()
	FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;

	UPROPERTY()
	FOnLoadoutItemButtonLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;

	UPROPERTY()
	FOnButtonClickEvent _onProgressionButtonClickEvent;

private:
	UFUNCTION()
	void HandleTeachablePerkTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleProgressionButtonClickEvent();

private:
	UFUNCTION()
	void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);

public:
	UUMGCharacterInfoScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterInfoScreen) { return 0; }
