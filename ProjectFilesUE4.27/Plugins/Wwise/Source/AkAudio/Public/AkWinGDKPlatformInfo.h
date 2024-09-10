#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkWinGDKPlatformInfo.generated.h"

UCLASS()
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkWinGDKPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkWinGDKPlatformInfo) { return 0; }
