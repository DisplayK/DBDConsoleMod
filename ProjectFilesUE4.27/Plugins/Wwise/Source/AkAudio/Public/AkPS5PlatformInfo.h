#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkPS5PlatformInfo.generated.h"

UCLASS()
class UAkPS5PlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkPS5PlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkPS5PlatformInfo) { return 0; }
