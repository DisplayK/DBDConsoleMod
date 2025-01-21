#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkXboxOneGDKPlatformInfo.generated.h"

UCLASS()
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkXboxOneGDKPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkXboxOneGDKPlatformInfo) { return 0; }
