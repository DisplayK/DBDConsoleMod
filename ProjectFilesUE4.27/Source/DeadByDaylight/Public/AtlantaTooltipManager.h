#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaTooltipManager.generated.h"

class UBaseTooltipWidget;
class UUMGCloseTooltipWidget;

UCLASS()
class UAtlantaTooltipManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UBaseTooltipWidget* _activeTooltip;

	UPROPERTY(Transient, Export)
	UUMGCloseTooltipWidget* _closeTooltipWidget;

private:
	UFUNCTION()
	void TryCloseActiveTooltipWithWidget();

public:
	UFUNCTION()
	bool TryCloseActiveTooltip();

public:
	UAtlantaTooltipManager();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaTooltipManager) { return 0; }
