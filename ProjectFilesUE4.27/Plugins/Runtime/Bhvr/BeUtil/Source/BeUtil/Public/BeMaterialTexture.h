#pragma once

#include "CoreMinimal.h"
#include "BeMaterialTexture.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FBeMaterialTexture
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FName Name;

	UPROPERTY(BlueprintReadWrite)
	UTexture* Texture;

public:
	BEUTIL_API FBeMaterialTexture();
};

FORCEINLINE uint32 GetTypeHash(const FBeMaterialTexture) { return 0; }
