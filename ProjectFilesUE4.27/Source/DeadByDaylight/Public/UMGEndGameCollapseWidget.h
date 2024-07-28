#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGEndGameCollapseWidget.generated.h"

class UCanvasPanel;
class UUMGEndGameCollapseProgressWidget;

UCLASS(EditInlineNew)
class UUMGEndGameCollapseWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _progressBarInterpSpeed;

	UPROPERTY(BlueprintReadOnly)
	bool _slowMode;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* NormalBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* SlowBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGEndGameCollapseProgressWidget* NormalProgressBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGEndGameCollapseProgressWidget* SlowProgressBar;

private:
	UPROPERTY(Transient, Export)
	UUMGEndGameCollapseProgressWidget* _topBar;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void PlayToZeroAnimation();

public:
	UUMGEndGameCollapseWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGEndGameCollapseWidget) { return 0; }
