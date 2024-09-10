#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_HasStatusEffect.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_HasStatusEffect : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TArray<FName> StatusEffectIds;

public:
	UBTDecorator_HasStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasStatusEffect) { return 0; }
