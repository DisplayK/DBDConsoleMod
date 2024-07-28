#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BannerDataProcessor.generated.h"

UCLASS()
class UBannerDataProcessor : public UObject
{
	GENERATED_BODY()

public:
	UBannerDataProcessor();
};

FORCEINLINE uint32 GetTypeHash(const UBannerDataProcessor) { return 0; }
