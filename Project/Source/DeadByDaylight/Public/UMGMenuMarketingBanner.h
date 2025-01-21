#pragma once

#include "CoreMinimal.h"
#include "UMGMenuBaseBanner.h"
#include "UMGMenuMarketingBanner.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGMenuMarketingBanner : public UUMGMenuBaseBanner
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* SubTitle;

public:
	UUMGMenuMarketingBanner();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMenuMarketingBanner) { return 0; }
