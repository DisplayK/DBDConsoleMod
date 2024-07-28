#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkStadiaPlatformInfo.generated.h"

UCLASS()
class UAkStadiaPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkStadiaPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkStadiaPlatformInfo) { return 0; }
