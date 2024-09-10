#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_HasActivatedBoonPerk.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_HasActivatedBoonPerk : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UBTDecorator_HasActivatedBoonPerk();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasActivatedBoonPerk) { return 0; }
