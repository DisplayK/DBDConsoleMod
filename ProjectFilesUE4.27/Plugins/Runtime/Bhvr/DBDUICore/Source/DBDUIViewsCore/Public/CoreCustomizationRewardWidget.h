#pragma once

#include "CoreMinimal.h"
#include "CoreRewardWidget.h"
#include "EItemRarity.h"
#include "CustomizationRewardViewData.h"
#include "CoreCustomizationRewardWidget.generated.h"

class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCustomizationRewardWidget : public UCoreRewardWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* RarityIMG;

public:
	UFUNCTION(BlueprintCallable)
	void SetRarity(EItemRarity rarity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FCustomizationRewardViewData& customizationRewardViewData);

public:
	UCoreCustomizationRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCustomizationRewardWidget) { return 0; }
