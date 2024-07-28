#pragma once

#include "CoreMinimal.h"
#include "EVoidEnergyChangeReason.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "EventProgressionData.h"
#include "HudObjectivesPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudObjectivesPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreHudObjectivesWidgetClass;

private:
	UFUNCTION()
	void OnEventProgressPendingChanged(const int32 value, const EVoidEnergyChangeReason reasonEnergyChanged);

	UFUNCTION()
	void OnEventProgressionDataInitialized(const FEventProgressionData& hudEventProgressionViewData);

	UFUNCTION()
	void OnEventProgressBankedChanged(const int32 value);

public:
	UHudObjectivesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudObjectivesPresenter) { return 0; }
