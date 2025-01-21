#pragma once

#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "EShowScrollDisplayPrompt.h"
#include "EControlMode.h"
#include "DBDScrollBox.generated.h"

class UCoreKeyListenerInputPromptWidget;
class URetainerBox;

UCLASS()
class DBDUIVIEWSCORE_API UDBDScrollBox : public UScrollBox
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, NoClear)
	bool _useControllerScroll;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, NoClear)
	bool _shouldScrollOnMouseOver;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, NoClear)
	float _scrollSpeed;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* _displayPrompt;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, NoClear)
	FText _displayPromptText;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, NoClear)
	EShowScrollDisplayPrompt _showDisplayPrompt;

	UPROPERTY(EditInstanceOnly, NoClear)
	bool IsUsingSmoothMask;

	UPROPERTY(EditInstanceOnly, NoClear, meta=(BindWidgetOptional))
	URetainerBox* SmoothMaskRetainerBox;

private:
	UFUNCTION()
	void UpdateSmoothMask(float currentOffset);

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateDisplayPrompt();

public:
	UFUNCTION(BlueprintCallable)
	void SetDisplayPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt);

protected:
	UFUNCTION(BlueprintCallable)
	void OnControlModeChanged(EControlMode controlMode);

public:
	UFUNCTION(BlueprintCallable)
	bool IsMouseOver();

protected:
	UFUNCTION(BlueprintCallable)
	void HandleControllerInput(float analogValue);

public:
	UDBDScrollBox();
};

FORCEINLINE uint32 GetTypeHash(const UDBDScrollBox) { return 0; }
