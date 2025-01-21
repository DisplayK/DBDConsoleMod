#pragma once

#include "CoreMinimal.h"
#include "AkReverbDescriptor.generated.h"

USTRUCT()
struct FAkReverbDescriptor
{
	GENERATED_BODY()

public:
	AKAUDIO_API FAkReverbDescriptor();
};

FORCEINLINE uint32 GetTypeHash(const FAkReverbDescriptor) { return 0; }
