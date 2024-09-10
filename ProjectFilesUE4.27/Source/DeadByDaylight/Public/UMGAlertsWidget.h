#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAlertsWidget.generated.h"

class UUMGGameplayAlertWidget;
class UUMGScoreAlertWidget;
class UCanvasPanel;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAlertsWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGScoreAlertWidget> AtlantaScoreAlertComponentClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGGameplayAlertWidget> AtlantaStatusEffectAlertComponentClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* CanvasPanelAlerts;

	UPROPERTY(BlueprintReadWrite, Transient)
	float IdleTime;

private:
	UPROPERTY(Transient)
	UClass* _scoreAlertClass;

	UPROPERTY(Transient)
	UClass* _statusEffectAlertClass;

public:
	UUMGAlertsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAlertsWidget) { return 0; }
