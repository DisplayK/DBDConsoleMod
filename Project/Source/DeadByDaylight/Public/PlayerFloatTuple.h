#pragma once

#include "CoreMinimal.h"
#include "PlayerFloatTuple.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FPlayerFloatTuple
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACharacter* Player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

public:
	DEADBYDAYLIGHT_API FPlayerFloatTuple();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerFloatTuple) { return 0; }
