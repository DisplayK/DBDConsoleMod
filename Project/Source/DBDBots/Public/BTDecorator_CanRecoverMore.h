#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_CanRecoverMore.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_CanRecoverMore : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UBTDecorator_CanRecoverMore();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CanRecoverMore) { return 0; }
