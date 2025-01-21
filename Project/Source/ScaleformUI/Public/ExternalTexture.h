#pragma once

#include "CoreMinimal.h"
#include "ExternalTexture.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FExternalTexture
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Resource;

	UPROPERTY()
	UTexture* Texture;

public:
	SCALEFORMUI_API FExternalTexture();
};

FORCEINLINE uint32 GetTypeHash(const FExternalTexture) { return 0; }
