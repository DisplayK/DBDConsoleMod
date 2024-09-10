#pragma once

#include "CoreMinimal.h"
#include "AkGroupValue.h"
#include "AkSwitchValue.generated.h"

UCLASS()
class AKAUDIO_API UAkSwitchValue : public UAkGroupValue
{
	GENERATED_BODY()

public:
	UAkSwitchValue();
};

FORCEINLINE uint32 GetTypeHash(const UAkSwitchValue) { return 0; }
