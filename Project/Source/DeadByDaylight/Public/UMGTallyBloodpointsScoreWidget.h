#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyBloodpointsScoreWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class UUMGTallyBloodpointsScoreWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateWidgetByScoreData(const FText& title, const UTexture2D* asset, int32 scoreValue);

public:
	UUMGTallyBloodpointsScoreWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyBloodpointsScoreWidget) { return 0; }
