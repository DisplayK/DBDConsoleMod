#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "InputCoreTypes.h"
#include "CoreInteractionPromptActionWidget.generated.h"

class UCoreInputPromptWidget;

UCLASS(EditInlineNew)
class UCoreInteractionPromptActionWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputPromptWidget* InputPrompt;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputPromptWidget* InputPrompt2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputPromptWidget* InputPrompt3;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputPromptWidget* InputPrompt4;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName IdleAnimationName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FKey InputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FKey InputKey2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FKey InputKey3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FKey InputKey4;

public:
	UFUNCTION(BlueprintCallable)
	void StopIdleAnimation();

	UFUNCTION(BlueprintCallable)
	void SetInputKey4(const FKey& inputKey4New);

	UFUNCTION(BlueprintCallable)
	void SetInputKey3(const FKey& inputKey3New);

	UFUNCTION(BlueprintCallable)
	void SetInputKey2(const FKey& inputKey2New);

	UFUNCTION(BlueprintCallable)
	void SetInputKey(const FKey& inputKeyNew);

	UFUNCTION(BlueprintCallable)
	void PlayIdleAnimation();

	UFUNCTION(BlueprintPure)
	bool HasThirdPrompt() const;

	UFUNCTION(BlueprintPure)
	bool HasSecondPrompt() const;

	UFUNCTION(BlueprintPure)
	bool HasFourthPrompt() const;

public:
	UCoreInteractionPromptActionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInteractionPromptActionWidget) { return 0; }
