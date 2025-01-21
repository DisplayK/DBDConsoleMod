#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "TooltipScreenUMG.generated.h"

class UBaseTooltipWidget;

UCLASS()
class UTooltipScreenUMG : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UBaseTooltipWidget* _tooltipWidget;

private:
	UFUNCTION()
	void OnCloseTriggered();

public:
	UTooltipScreenUMG();
};

FORCEINLINE uint32 GetTypeHash(const UTooltipScreenUMG) { return 0; }
