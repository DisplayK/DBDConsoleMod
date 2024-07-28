#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkPS4PlatformInfo.generated.h"

UCLASS()
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkPS4PlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkPS4PlatformInfo) { return 0; }
