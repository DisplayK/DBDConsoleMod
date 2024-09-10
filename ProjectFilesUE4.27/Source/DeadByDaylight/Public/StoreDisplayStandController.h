#pragma once

#include "CoreMinimal.h"
#include "DisplayStandController.h"
#include "StoreDisplayStandController.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStoreDisplayStandController : public UDisplayStandController
{
	GENERATED_BODY()

public:
	UStoreDisplayStandController();
};

FORCEINLINE uint32 GetTypeHash(const UStoreDisplayStandController) { return 0; }
