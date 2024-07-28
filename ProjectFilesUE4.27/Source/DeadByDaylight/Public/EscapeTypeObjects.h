#pragma once

#include "CoreMinimal.h"
#include "EscapeStrategyType.h"
#include "UObject/SoftObjectPtr.h"
#include "EscapeTypeObjects.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEscapeTypeObjects
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EscapeStrategyType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftClassPtr<AActor>> EscapeObjects;

public:
	DEADBYDAYLIGHT_API FEscapeTypeObjects();
};

FORCEINLINE uint32 GetTypeHash(const FEscapeTypeObjects) { return 0; }
