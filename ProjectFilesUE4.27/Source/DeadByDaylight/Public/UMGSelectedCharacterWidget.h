#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnButtonClickEvent.h"
#include "UMGSelectedCharacterWidget.generated.h"

class UUMGCharacterPrestigeButton;
class UVerticalBox;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSelectedCharacterWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterPrestigeButton* PrestigeButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CharacterNameText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CharacterLevelText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* CharacterLevelVerticalBox;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* LeaderIcon;

	UPROPERTY(BlueprintAssignable)
	FOnButtonClickEvent _onCancelPartyButtonClick;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualsForReadyState(const bool isPlayerReady);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualsForPartyState(const bool triggerPartyVisuals);

protected:
	UFUNCTION()
	void OnPrestigeButtonClicked();

public:
	UUMGSelectedCharacterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSelectedCharacterWidget) { return 0; }
