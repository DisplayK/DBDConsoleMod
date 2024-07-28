#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OfferingTypeTexture.generated.h"

USTRUCT(BlueprintType)
struct FOfferingTypeTexture
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName Type;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath TextureBack;

public:
	DEADBYDAYLIGHT_API FOfferingTypeTexture();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingTypeTexture) { return 0; }
