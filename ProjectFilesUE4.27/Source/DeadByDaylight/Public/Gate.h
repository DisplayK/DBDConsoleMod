#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gate.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API AGate : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> InteractionInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractionOutput;

public:
	AGate();
};

FORCEINLINE uint32 GetTypeHash(const AGate) { return 0; }
