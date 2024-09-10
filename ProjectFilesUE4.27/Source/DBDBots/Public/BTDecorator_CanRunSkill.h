#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_CanRunSkill.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_CanRunSkill : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FGameplayTag Context;

public:
	UBTDecorator_CanRunSkill();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CanRunSkill) { return 0; }
