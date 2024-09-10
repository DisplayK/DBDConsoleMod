#pragma once

#include "CoreMinimal.h"
#include "MaterialMap.h"
#include "MaterialNamedGroup.generated.h"

USTRUCT(BlueprintType)
struct FMaterialNamedGroup
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FMaterialMap> Maps;

public:
	GFXUTILITIES_API FMaterialNamedGroup();
};

FORCEINLINE uint32 GetTypeHash(const FMaterialNamedGroup) { return 0; }
