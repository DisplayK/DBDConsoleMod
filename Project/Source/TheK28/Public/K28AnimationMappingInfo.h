#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "K28AnimationMappingInfo.generated.h"

USTRUCT(BlueprintType)
struct FK28AnimationMappingInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory CustomizationCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

public:
	THEK28_API FK28AnimationMappingInfo();
};

FORCEINLINE uint32 GetTypeHash(const FK28AnimationMappingInfo) { return 0; }
