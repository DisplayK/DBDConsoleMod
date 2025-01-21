#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoopBannerProvider.generated.h"

UCLASS()
class DYNAMICCONTENT_API ULoopBannerProvider : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	int32 _currentLoopIndex;

public:
	ULoopBannerProvider();
};

FORCEINLINE uint32 GetTypeHash(const ULoopBannerProvider) { return 0; }
