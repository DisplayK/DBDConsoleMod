#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DisplayStandController.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDisplayStandController : public UObject
{
	GENERATED_BODY()

public:
	UDisplayStandController();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandController) { return 0; }
