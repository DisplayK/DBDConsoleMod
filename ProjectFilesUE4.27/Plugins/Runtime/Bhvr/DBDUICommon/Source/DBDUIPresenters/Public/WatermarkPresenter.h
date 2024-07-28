#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "WatermarkPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UWatermarkPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> WatermarkWidgetClass;

protected:
	UFUNCTION()
	bool IsUsingCommandLineArgument();

	UFUNCTION()
	bool IsSteamBuild();

	UFUNCTION()
	bool IsNonShippingBuild();

public:
	UWatermarkPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UWatermarkPresenter) { return 0; }
