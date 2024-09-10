#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkHololensPlatformInfo.generated.h"

UCLASS()
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkHololensPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkHololensPlatformInfo) { return 0; }
