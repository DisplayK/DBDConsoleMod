#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "AkAudioEventTrackKey.h"
#include "InterpTrackAkAudioEvent.generated.h"

UCLASS()
class AKAUDIO_API UInterpTrackAkAudioEvent : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FAkAudioEventTrackKey> Events;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bContinueEventOnMatineeEnd : 1;

public:
	UInterpTrackAkAudioEvent();
};

FORCEINLINE uint32 GetTypeHash(const UInterpTrackAkAudioEvent) { return 0; }
