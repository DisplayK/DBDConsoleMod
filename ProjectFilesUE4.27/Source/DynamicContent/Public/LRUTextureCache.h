#pragma once

#include "CoreMinimal.h"
#include "LRUTextureCache.generated.h"

class UTexture2DDynamic;

USTRUCT()
struct FLRUTextureCache
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<FName, UTexture2DDynamic*> _cachedTextures;

public:
	DYNAMICCONTENT_API FLRUTextureCache();
};

FORCEINLINE uint32 GetTypeHash(const FLRUTextureCache) { return 0; }
