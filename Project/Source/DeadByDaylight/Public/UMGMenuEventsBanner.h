#pragma once

#include "CoreMinimal.h"
#include "UMGMenuBaseBanner.h"
#include "UMGMenuEventsBanner.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGMenuEventsBanner : public UUMGMenuBaseBanner
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* EventsIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* FallbackTitle;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetDefaultWidgetLayout();

	UFUNCTION(BlueprintImplementableEvent)
	void SetCustomWidgetLayout();

public:
	UUMGMenuEventsBanner();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMenuEventsBanner) { return 0; }
