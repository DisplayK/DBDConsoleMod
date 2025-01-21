#pragma once

#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaCalendarEventsTemplate.generated.h"

class UUMGAtlantaDailyRewardsGrid;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaCalendarEventsTemplate : public UUMGAtlantaBaseEventsTemplate
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGAtlantaDailyRewardsGrid* DailyRewardGrid;

public:
	UUMGAtlantaCalendarEventsTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaCalendarEventsTemplate) { return 0; }
