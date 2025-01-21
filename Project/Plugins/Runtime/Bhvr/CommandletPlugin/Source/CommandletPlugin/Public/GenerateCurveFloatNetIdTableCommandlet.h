#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "GenerateCurveFloatNetIdTableCommandlet.generated.h"

UCLASS(NonTransient)
class UGenerateCurveFloatNetIdTableCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UGenerateCurveFloatNetIdTableCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UGenerateCurveFloatNetIdTableCommandlet) { return 0; }
