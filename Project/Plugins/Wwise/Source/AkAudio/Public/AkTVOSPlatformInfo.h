#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkTVOSPlatformInfo.generated.h"

UCLASS()
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkTVOSPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkTVOSPlatformInfo) { return 0; }
