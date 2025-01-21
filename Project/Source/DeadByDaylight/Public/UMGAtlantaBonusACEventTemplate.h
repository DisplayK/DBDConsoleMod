#pragma once

#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaBonusACEventTemplate.generated.h"

class UUMGAtlCurrencyStorefrontWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaBonusACEventTemplate : public UUMGAtlantaBaseEventsTemplate
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGAtlCurrencyStorefrontWidget* currencyStorefrontWidget;

	UPROPERTY(EditAnywhere)
	FString LastPackSmallIconPath;

	UPROPERTY(EditAnywhere)
	float InitialSize;

	UPROPERTY(EditAnywhere)
	float AugmentedSize;

	UPROPERTY(EditAnywhere)
	int32 MaxNumberOfPacksToShowBigger;

public:
	UUMGAtlantaBonusACEventTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaBonusACEventTemplate) { return 0; }
