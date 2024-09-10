#pragma once

#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "AkSubmixInputComponent.generated.h"

class USoundSubmix;

UCLASS(meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSubmixInputComponent : public UAkAudioInputComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundSubmix* SubmixToRecord;

public:
	UAkSubmixInputComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkSubmixInputComponent) { return 0; }
