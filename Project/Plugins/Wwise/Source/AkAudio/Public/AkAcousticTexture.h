#pragma once

#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkAcousticTexture.generated.h"

UCLASS()
class AKAUDIO_API UAkAcousticTexture : public UAkAudioType
{
	GENERATED_BODY()

public:
	UAkAcousticTexture();
};

FORCEINLINE uint32 GetTypeHash(const UAkAcousticTexture) { return 0; }
