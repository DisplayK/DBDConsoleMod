#pragma once

#include "CoreMinimal.h"
#include "EDirection.h"
#include "BorderElements.generated.h"

class UActorSpawner;

USTRUCT(BlueprintType)
struct FBorderElements
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDirection Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UActorSpawner*> Elements;

public:
	DEADBYDAYLIGHT_API FBorderElements();
};

FORCEINLINE uint32 GetTypeHash(const FBorderElements) { return 0; }
