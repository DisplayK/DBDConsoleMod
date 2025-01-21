#pragma once

#include "CoreMinimal.h"
#include "UMGCharacterPrestigeIcon.h"
#include "EPlayerRole.h"
#include "UMGCharacterPrestigeButton.generated.h"

class UCanvasPanel;
class UButton;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrestigeButton : public UUMGCharacterPrestigeIcon
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* PrestigeButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* PrestigeAnimationCanvas;

public:
	UFUNCTION(BlueprintCallable)
	void SetCharacterPrestigeData(bool canPrestige, const int32 prestigeLevel, const EPlayerRole role);

protected:
	UFUNCTION()
	void OnPrestigeButtonClicked();

public:
	UUMGCharacterPrestigeButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterPrestigeButton) { return 0; }
