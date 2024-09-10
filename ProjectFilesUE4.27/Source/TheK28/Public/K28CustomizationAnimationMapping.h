#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "K28AnimationMappingInfo.h"
#include "K28CustomizationAnimationMapping.generated.h"

USTRUCT(BlueprintType)
struct FK28CustomizationAnimationMapping: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> AnimTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FK28AnimationMappingInfo> _mappingInfos;

public:
	THEK28_API FK28CustomizationAnimationMapping();
};

FORCEINLINE uint32 GetTypeHash(const FK28CustomizationAnimationMapping) { return 0; }
