#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "InterpTrackAkAudioRTPC.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackAkAudioRTPC : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Param;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bPlayOnReverse : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bContinueRTPCOnMatineeEnd : 1;

public:
	UInterpTrackAkAudioRTPC();
};

FORCEINLINE uint32 GetTypeHash(const UInterpTrackAkAudioRTPC) { return 0; }
