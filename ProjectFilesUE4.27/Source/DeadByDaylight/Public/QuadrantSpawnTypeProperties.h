#pragma once

#include "CoreMinimal.h"
#include "EQuadrantSpawnType.h"
#include "SectionLenghtsProperties.h"
#include "QuadrantSpawnTypeProperties.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantSpawnTypeProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EQuadrantSpawnType QuadrantSpawnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSectionLenghtsProperties> SectionLenghts;

public:
	DEADBYDAYLIGHT_API FQuadrantSpawnTypeProperties();
};

FORCEINLINE uint32 GetTypeHash(const FQuadrantSpawnTypeProperties) { return 0; }
