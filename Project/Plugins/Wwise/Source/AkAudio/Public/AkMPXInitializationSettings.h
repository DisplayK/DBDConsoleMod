#pragma once

#include "CoreMinimal.h"
#include "AkXSXInitializationSettings.h"
#include "AkMPXInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
	GENERATED_BODY()

public:
	UAkMPXInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkMPXInitializationSettings) { return 0; }
