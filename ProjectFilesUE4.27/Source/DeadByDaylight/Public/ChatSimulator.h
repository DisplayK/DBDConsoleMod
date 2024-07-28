#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChatSimulator.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UChatSimulator : public UObject
{
	GENERATED_BODY()

public:
	UChatSimulator();
};

FORCEINLINE uint32 GetTypeHash(const UChatSimulator) { return 0; }
