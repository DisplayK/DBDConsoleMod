#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInBoonBlessingRange.generated.h"

class ATotem;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOwningPlayerInBoonBlessingRange : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ATotem* _boundTotem;

public:
	UOwningPlayerInBoonBlessingRange();
};

FORCEINLINE uint32 GetTypeHash(const UOwningPlayerInBoonBlessingRange) { return 0; }
