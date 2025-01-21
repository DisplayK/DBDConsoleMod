#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ScreenIndicatorViewData.h"
#include "CoreScreenIndicatorWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	float InactiveTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D IndicatorPadding;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D DistanceClamping;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinDistanceRatio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinDistanceAlpha;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FScreenIndicatorViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClearData();

public:
	UCoreScreenIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreScreenIndicatorWidget) { return 0; }
