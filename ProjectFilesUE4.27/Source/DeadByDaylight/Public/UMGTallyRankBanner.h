#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyRankBanner.generated.h"

class UUMGTallyPipsContainer;
class UImage;
class UUMGRankBanner;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyRankBanner : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyPipsContainer* PipsContainerWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRankBanner* RankBanner;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* SmokeBackground;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAsLocked(bool locked);

public:
	UUMGTallyRankBanner();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyRankBanner) { return 0; }
