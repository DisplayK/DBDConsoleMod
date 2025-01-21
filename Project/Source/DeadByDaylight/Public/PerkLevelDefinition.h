#pragma once

#include "CoreMinimal.h"
#include "PerkLevelDefinition.generated.h"

USTRUCT(BlueprintType)
struct FPerkLevelDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CountRequired;

public:
	DEADBYDAYLIGHT_API FPerkLevelDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FPerkLevelDefinition) { return 0; }
