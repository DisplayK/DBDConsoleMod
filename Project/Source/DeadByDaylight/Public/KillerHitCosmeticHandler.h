#pragma once

#include "CoreMinimal.h"
#include "BaseReversibleInstantActionHandler.h"
#include "KillerHitCosmeticHandler.generated.h"

UCLASS()
class UKillerHitCosmeticHandler : public UBaseReversibleInstantActionHandler
{
	GENERATED_BODY()

public:
	UKillerHitCosmeticHandler();
};

FORCEINLINE uint32 GetTypeHash(const UKillerHitCosmeticHandler) { return 0; }
