#pragma once

#include "CoreMinimal.h"
#include "RBTSurvivorPair.generated.h"

class ACamperPlayer;
class AReverseBearTrap;

USTRUCT(BlueprintType)
struct FRBTSurvivorPair
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AReverseBearTrap* ReverseBearTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACamperPlayer* Survivor;

public:
	THEPIG_API FRBTSurvivorPair();
};

FORCEINLINE uint32 GetTypeHash(const FRBTSurvivorPair) { return 0; }
