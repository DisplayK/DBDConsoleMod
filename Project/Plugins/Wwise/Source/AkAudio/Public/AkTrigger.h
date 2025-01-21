#pragma once

#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkTrigger.generated.h"

UCLASS()
class AKAUDIO_API UAkTrigger : public UAkAudioType
{
	GENERATED_BODY()

public:
	UAkTrigger();
};

FORCEINLINE uint32 GetTypeHash(const UAkTrigger) { return 0; }
