#pragma once

#include "CoreMinimal.h"
#include "QuadrantSpawnItem.h"
#include "QuadrantSpawnCategories.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantSpawnCategories
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuadrantSpawnTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuadrantSpawnItem> Items;

public:
	DEADBYDAYLIGHT_API FQuadrantSpawnCategories();
};

FORCEINLINE uint32 GetTypeHash(const FQuadrantSpawnCategories) { return 0; }
