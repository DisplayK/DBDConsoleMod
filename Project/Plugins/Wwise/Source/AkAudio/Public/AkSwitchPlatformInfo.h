#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkSwitchPlatformInfo.generated.h"

UCLASS()
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkSwitchPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkSwitchPlatformInfo) { return 0; }
