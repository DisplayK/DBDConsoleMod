#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAcousticTextureParams.generated.h"

USTRUCT()
struct FAkAcousticTextureParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector4 AbsorptionValues;

public:
	AKAUDIO_API FAkAcousticTextureParams();
};

FORCEINLINE uint32 GetTypeHash(const FAkAcousticTextureParams) { return 0; }
