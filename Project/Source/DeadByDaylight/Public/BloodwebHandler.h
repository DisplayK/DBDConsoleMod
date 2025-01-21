#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebHandler.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebHandler : public UObject
{
	GENERATED_BODY()

public:
	UBloodwebHandler();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebHandler) { return 0; }
