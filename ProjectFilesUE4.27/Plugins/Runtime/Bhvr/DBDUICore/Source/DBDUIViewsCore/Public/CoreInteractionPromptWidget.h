#pragma once

#include "CoreMinimal.h"
#include "InteractionPromptViewData.h"
#include "Blueprint/UserWidget.h"
#include "CoreInteractionPromptWidget.generated.h"

class UScaleBox;
class UDBDTextBlock;
class UDBDTextManager;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreInteractionPromptWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LargeTextScale;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScaleBox* LargeTextScaleBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* ActionTB;

private:
	UPROPERTY(Transient)
	UDBDTextManager* _textManager;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FInteractionPromptViewData& data);

private:
	UFUNCTION()
	void OnLargeTextSettingsChanged(bool isLargeTextEnabled);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClearData();

public:
	UCoreInteractionPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInteractionPromptWidget) { return 0; }
