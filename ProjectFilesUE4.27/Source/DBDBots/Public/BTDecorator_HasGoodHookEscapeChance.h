#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_HasGoodHookEscapeChance.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_HasGoodHookEscapeChance : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	float GoodHookEscapeProbability;

public:
	UBTDecorator_HasGoodHookEscapeChance();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasGoodHookEscapeChance) { return 0; }
