#pragma once

#include "CoreMinimal.h"
#include "WindowBlockableList.generated.h"

class UBlockableComponent;

USTRUCT(BlueprintType)
struct FWindowBlockableList
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	TArray<UBlockableComponent*> Blockables;

public:
	DBDCOMPETENCE_API FWindowBlockableList();
};

FORCEINLINE uint32 GetTypeHash(const FWindowBlockableList) { return 0; }
