#pragma once

#include "CoreMinimal.h"
#include "EmblemProgressionDescriptionByQuality.h"
#include "EEmblemProgressionType.h"
#include "EmblemProgressionID.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionID
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEmblemProgressionType EmblemProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DefaultDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEmblemProgressionDescriptionByQuality> DescriptionsByQuality;

public:
	DEADBYDAYLIGHT_API FEmblemProgressionID();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionID) { return 0; }
