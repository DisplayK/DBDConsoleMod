#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkXboxOnePlatformInfo.generated.h"

UCLASS()
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkXboxOnePlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkXboxOnePlatformInfo) { return 0; }
