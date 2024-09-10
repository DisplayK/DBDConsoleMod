#pragma once

#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AkAudioInputComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkAudioInputComponent : public UAkComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 PostAssociatedAudioInputEvent();

public:
	UAkAudioInputComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioInputComponent) { return 0; }
