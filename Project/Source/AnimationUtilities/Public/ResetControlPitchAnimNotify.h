#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ResetControlPitchAnimNotify.generated.h"

UCLASS()
class ANIMATIONUTILITIES_API UResetControlPitchAnimNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	UResetControlPitchAnimNotify();
};

FORCEINLINE uint32 GetTypeHash(const UResetControlPitchAnimNotify) { return 0; }
