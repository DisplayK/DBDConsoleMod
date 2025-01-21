#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkAndroidPlatformInfo.generated.h"

UCLASS()
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkAndroidPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkAndroidPlatformInfo) { return 0; }
