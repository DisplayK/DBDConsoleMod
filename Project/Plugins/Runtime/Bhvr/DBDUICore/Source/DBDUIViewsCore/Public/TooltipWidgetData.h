#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ETooltipType.h"
#include "Templates/SubclassOf.h"
#include "TooltipWidgetData.generated.h"

class UUserWidget;

USTRUCT()
struct FTooltipWidgetData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ETooltipType TooltipType;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> WidgetClass;

public:
	DBDUIVIEWSCORE_API FTooltipWidgetData();
};

FORCEINLINE uint32 GetTypeHash(const FTooltipWidgetData) { return 0; }
