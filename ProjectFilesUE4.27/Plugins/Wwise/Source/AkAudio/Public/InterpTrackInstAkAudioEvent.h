#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "InterpTrackInstAkAudioEvent.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float LastUpdatePosition;

public:
	UInterpTrackInstAkAudioEvent();
};

FORCEINLINE uint32 GetTypeHash(const UInterpTrackInstAkAudioEvent) { return 0; }
