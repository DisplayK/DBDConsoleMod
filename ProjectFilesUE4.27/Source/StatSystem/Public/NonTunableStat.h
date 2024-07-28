#pragma once

#include "CoreMinimal.h"
#include "BaseStat.h"
#include "NonTunableStat.generated.h"

USTRUCT(BlueprintType)
struct FNonTunableStat: public FBaseStat
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _baseValue;

public:
	STATSYSTEM_API FNonTunableStat();
};

FORCEINLINE uint32 GetTypeHash(const FNonTunableStat) { return 0; }
