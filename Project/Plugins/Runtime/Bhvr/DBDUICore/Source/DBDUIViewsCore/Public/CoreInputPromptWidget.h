#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "InputCoreTypes.h"
#include "CoreInputPromptWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreInputPromptWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText _unfoundInputKeyText;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FKey _inputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isEnabled;

public:
	UFUNCTION(BlueprintCallable)
	void SetInputKey(const FKey& inputKey);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

protected:
	UFUNCTION(BlueprintCallable)
	void PromptNotFound();

	UFUNCTION(BlueprintImplementableEvent)
	void OnEnabledChanged(bool isEnabled);

public:
	UFUNCTION(BlueprintPure)
	bool IsEnabled();

protected:
	UFUNCTION(BlueprintPure)
	FText GetInputShortDisplayName() const;

public:
	UFUNCTION(BlueprintPure)
	FKey GetInputKey();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void DisplayPrompt();

public:
	UCoreInputPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInputPromptWidget) { return 0; }
