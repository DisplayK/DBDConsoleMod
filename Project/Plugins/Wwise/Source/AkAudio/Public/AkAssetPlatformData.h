#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAssetPlatformData.generated.h"

class UAkAssetData;

UCLASS()
class AKAUDIO_API UAkAssetPlatformData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UAkAssetData* CurrentAssetData;

public:
	UAkAssetPlatformData();
};

FORCEINLINE uint32 GetTypeHash(const UAkAssetPlatformData) { return 0; }
