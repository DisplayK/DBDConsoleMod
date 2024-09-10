#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkXSXPlatformInfo.generated.h"

UCLASS()
class UAkXSXPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkXSXPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkXSXPlatformInfo) { return 0; }
