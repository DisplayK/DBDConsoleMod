#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "RewardItemData.h"
#include "UMGRewardWidget.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGRewardWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CheckIcon;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FRewardItemData& RewardData);

public:
	UUMGRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRewardWidget) { return 0; }
