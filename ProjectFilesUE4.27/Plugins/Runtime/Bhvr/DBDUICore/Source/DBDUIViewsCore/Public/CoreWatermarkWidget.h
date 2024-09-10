#pragma once

#include "CoreMinimal.h"
#include "WatermarkViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreWatermarkWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreWatermarkWidget : public UCoreBaseUserWidget, public IWatermarkViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UDBDTextBlock*> _watermarkDBDTextBlocks;

protected:
	UFUNCTION()
	void UpdateWatermarkText();

public:
	UCoreWatermarkWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreWatermarkWidget) { return 0; }
