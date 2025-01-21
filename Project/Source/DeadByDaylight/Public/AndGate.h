#pragma once

#include "CoreMinimal.h"
#include "Gate.h"
#include "AndGate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AAndGate : public AGate
{
	GENERATED_BODY()

public:
	AAndGate();
};

FORCEINLINE uint32 GetTypeHash(const AAndGate) { return 0; }
