#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Fixated.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFixated : public UPerk
{
	GENERATED_BODY()

public:
	UFixated();
};

FORCEINLINE uint32 GetTypeHash(const UFixated) { return 0; }
