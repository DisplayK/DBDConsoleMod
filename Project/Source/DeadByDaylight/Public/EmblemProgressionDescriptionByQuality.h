#pragma once

#include "CoreMinimal.h"
#include "EEmblemQuality.h"
#include "EmblemProgressionDescriptionByQuality.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionDescriptionByQuality
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEmblemQuality EmblemQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

public:
	DEADBYDAYLIGHT_API FEmblemProgressionDescriptionByQuality();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionDescriptionByQuality) { return 0; }
