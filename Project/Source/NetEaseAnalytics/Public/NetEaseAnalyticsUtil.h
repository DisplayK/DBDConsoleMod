#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetEaseAnalyticsUtil.generated.h"

UCLASS()
class NETEASEANALYTICS_API UNetEaseAnalyticsUtil : public UObject
{
	GENERATED_BODY()

public:
	UNetEaseAnalyticsUtil();
};

FORCEINLINE uint32 GetTypeHash(const UNetEaseAnalyticsUtil) { return 0; }
