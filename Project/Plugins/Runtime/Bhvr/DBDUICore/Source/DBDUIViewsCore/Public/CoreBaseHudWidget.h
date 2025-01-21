#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EEasingType.h"
#include "CoreBaseHudWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCoreBaseHudWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusAnimationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusAnimationDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType FocusAnimationEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusAnimationMaxOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusAnimationMinOpacity;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool ShouldPlayFocusAnimation() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayFocusAnimation();

public:
	UCoreBaseHudWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBaseHudWidget) { return 0; }
