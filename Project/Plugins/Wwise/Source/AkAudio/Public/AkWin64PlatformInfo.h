#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkWin64PlatformInfo.generated.h"

UCLASS()
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkWin64PlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkWin64PlatformInfo) { return 0; }
