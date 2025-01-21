#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "UObject/SoftObjectPtr.h"
#include "ManagedGameplayElementsPopulation.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FManagedGameplayElementsPopulation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameplayElementType Type;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<AActor> GameplayElementBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinPopulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPopulation;

public:
	DEADBYDAYLIGHT_API FManagedGameplayElementsPopulation();
};

FORCEINLINE uint32 GetTypeHash(const FManagedGameplayElementsPopulation) { return 0; }
