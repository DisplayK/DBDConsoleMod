#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "CharacterSlotData.h"
#include "UMGCharacterButton.generated.h"

class UUMGCharacterPrice;
class UImage;
class UCanvasPanel;
class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PortraitIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* CharacterSelectedPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* LevelPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CharacterLevelText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* OwnedCustomizationText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TotalCustomizationText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* PricePanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterPrice* CellPrice;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterPrice* ShardPrice;

	UPROPERTY(BlueprintReadWrite, Transient)
	FCharacterSlotData CharacterSlotData;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsSelected(bool isSelected);

	UFUNCTION(BlueprintCallable)
	void SetCharacterData(const FCharacterSlotData& characterData);

	UFUNCTION(BlueprintCallable)
	void BroadcastClickedEvent(int32 characterIndex);

public:
	UUMGCharacterButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterButton) { return 0; }
