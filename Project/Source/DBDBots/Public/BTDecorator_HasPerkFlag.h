#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_HasPerkFlag.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_HasPerkFlag : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TArray<FGameplayTag> GameplayTags;

public:
	UBTDecorator_HasPerkFlag();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasPerkFlag) { return 0; }
