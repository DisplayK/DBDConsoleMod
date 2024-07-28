#pragma once

#include "CoreMinimal.h"
#include "AkStadiaInitializationSettings.h"
#include "AkQuailInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkQuailInitializationSettings : public UAkStadiaInitializationSettings
{
	GENERATED_BODY()

public:
	UAkQuailInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkQuailInitializationSettings) { return 0; }
