#pragma once

#include "CoreMinimal.h"
#include "StatModifier.h"
#include "BaseStat.generated.h"

USTRUCT()
struct FBaseStat
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FStatModifier> _statModifiers;

public:
	STATSYSTEM_API FBaseStat();
};

FORCEINLINE uint32 GetTypeHash(const FBaseStat) { return 0; }
