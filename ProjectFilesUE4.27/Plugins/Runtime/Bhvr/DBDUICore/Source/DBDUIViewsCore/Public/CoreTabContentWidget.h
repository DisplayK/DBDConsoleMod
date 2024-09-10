#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EEasingType.h"
#include "CoreTabContentWidget.generated.h"

class UWidget;

UCLASS(EditInlineNew)
class UCoreTabContentWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UWidget*> ContentWidgets;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _contentFadeInTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EEasingType _contentFadeInEasing;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _contentFadeOutTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EEasingType _contentFadeOutEasing;

public:
	UFUNCTION(BlueprintCallable)
	void StopFadeInTweening(float opacityValue);

	UFUNCTION(BlueprintCallable)
	void ResetFade();

	UFUNCTION(BlueprintCallable)
	void FadeOutContent();

	UFUNCTION(BlueprintCallable)
	void FadeInContent();

public:
	UCoreTabContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTabContentWidget) { return 0; }
