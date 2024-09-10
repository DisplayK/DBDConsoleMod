#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PenaltyTracker.generated.h"

UCLASS()
class PENALTY_API UPenaltyTracker : public UObject
{
	GENERATED_BODY()

public:
	UPenaltyTracker();
};

FORCEINLINE uint32 GetTypeHash(const UPenaltyTracker) { return 0; }
