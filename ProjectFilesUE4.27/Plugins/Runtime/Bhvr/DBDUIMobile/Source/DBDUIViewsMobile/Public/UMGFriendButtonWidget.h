#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "Styling/SlateBrush.h"
#include "EFriendTypeButton.h"
#include "UMGFriendButtonWidget.generated.h"

class UCanvasPanel;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGFriendButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UCanvasPanel* InteractableButtonStatePanel;

	UPROPERTY(meta=(BindWidgetOptional))
	UCanvasPanel* NonInteractableButtonStatePanel;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* NonInteractableExplanationText;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* NonInteractableActionText;

	UPROPERTY(Transient)
	bool _isInteractable;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* NonInteractableImage;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TMap<EFriendTypeButton, FSlateBrush> _nonInteractableImages;

public:
	UUMGFriendButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendButtonWidget) { return 0; }
