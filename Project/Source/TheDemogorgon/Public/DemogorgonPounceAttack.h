#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DemogorgonPounceAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEDEMOGORGON_API UDemogorgonPounceAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UDemogorgonPounceAttack();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPounceAttack) { return 0; }
