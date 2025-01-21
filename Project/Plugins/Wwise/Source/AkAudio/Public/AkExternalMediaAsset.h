#pragma once

#include "CoreMinimal.h"
#include "AkMediaAsset.h"
#include "AkExternalMediaAsset.generated.h"

UCLASS()
class AKAUDIO_API UAkExternalMediaAsset : public UAkMediaAsset
{
	GENERATED_BODY()

public:
	UAkExternalMediaAsset();
};

FORCEINLINE uint32 GetTypeHash(const UAkExternalMediaAsset) { return 0; }
