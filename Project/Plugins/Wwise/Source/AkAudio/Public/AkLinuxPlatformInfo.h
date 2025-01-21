#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkLinuxPlatformInfo.generated.h"

UCLASS()
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkLinuxPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkLinuxPlatformInfo) { return 0; }
