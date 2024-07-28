#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaEventsTab.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaEventsTab : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FString _eventId;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* HotTagText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* NewTagText;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSelectionVisuals(bool isSelected);

	UFUNCTION(BlueprintImplementableEvent)
	void SetNewTag();

	UFUNCTION(BlueprintImplementableEvent)
	void SetHotTag();

public:
	UUMGAtlantaEventsTab();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaEventsTab) { return 0; }
