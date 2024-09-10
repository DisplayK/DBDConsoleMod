#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaFriendUIData.h"
#include "EActionOnFriendType.h"
#include "UMGBaseFriendListElement.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UDataTable;
class UNamedSlot;
class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseFriendListElement : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UImage* StatusPicture;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* FriendName;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* FriendStatus;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* SelectionHighlight;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* ItemSelectionBaseButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UNamedSlot* ContextualMenuPosition;

	UPROPERTY()
	FAtlantaFriendUIData _cachedFriendData;

	UPROPERTY(EditAnywhere)
	UDataTable* FriendUIStatusDataTable;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerActionOnThisFriend(EActionOnFriendType actionType);

public:
	UUMGBaseFriendListElement();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseFriendListElement) { return 0; }
