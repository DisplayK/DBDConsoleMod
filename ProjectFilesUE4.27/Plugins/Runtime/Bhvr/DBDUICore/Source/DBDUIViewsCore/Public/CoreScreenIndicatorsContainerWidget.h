#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ScreenIndicatorsContainerViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreScreenIndicatorsContainerWidget.generated.h"

class UCanvasPanel;
class UCoreScreenIndicatorWidget;

UCLASS(EditInlineNew)
class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget, public IScreenIndicatorsContainerViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float InactiveThreshold;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* Container;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreScreenIndicatorWidget> ScreenIndicatorClass;

private:
	UPROPERTY(Transient, Export)
	TMap<FString, UCoreScreenIndicatorWidget*> _screenIndicatorsMap;

	UPROPERTY(Transient, Export)
	TArray<UCoreScreenIndicatorWidget*> _screenIndicatorsPool;

protected:
	UFUNCTION(BlueprintCallable)
	TMap<FString, UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();

	UFUNCTION(BlueprintPure)
	FString FindScreenIndicatorKey(UCoreScreenIndicatorWidget* value) const;

public:
	UCoreScreenIndicatorsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreScreenIndicatorsContainerWidget) { return 0; }
