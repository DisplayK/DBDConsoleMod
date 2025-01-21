#pragma once

#include "CoreMinimal.h"
#include "EPlayerStatusBloodSplatterType.h"
#include "PlayerStatusAssets.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPlayerStatusAssets
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerStatusBloodSplatterType BloodSplatterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* BloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* IconTexture;

public:
	DBDUIVIEWSCORE_API FPlayerStatusAssets();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusAssets) { return 0; }
