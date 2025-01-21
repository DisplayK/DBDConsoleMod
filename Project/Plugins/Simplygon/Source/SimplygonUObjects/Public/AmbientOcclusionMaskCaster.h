#pragma once

#include "CoreMinimal.h"
#include "BaseColorCaster.h"
#include "AmbientOcclusionMaskCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UAmbientOcclusionMaskCaster : public UBaseColorCaster
{
	GENERATED_BODY()

public:
	UAmbientOcclusionMaskCaster();
};

FORCEINLINE uint32 GetTypeHash(const UAmbientOcclusionMaskCaster) { return 0; }
