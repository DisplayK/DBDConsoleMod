#pragma once

#include "CoreMinimal.h"
#include "AkMediaAsset.h"
#include "AkLocalizedMediaAsset.generated.h"

UCLASS()
class AKAUDIO_API UAkLocalizedMediaAsset : public UAkMediaAsset
{
	GENERATED_BODY()

public:
	UAkLocalizedMediaAsset();
};

FORCEINLINE uint32 GetTypeHash(const UAkLocalizedMediaAsset) { return 0; }
