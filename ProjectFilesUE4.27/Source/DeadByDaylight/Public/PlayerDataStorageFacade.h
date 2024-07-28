#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerDataStorageFacade.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlayerDataStorageFacade : public UObject
{
	GENERATED_BODY()

public:
	UPlayerDataStorageFacade();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerDataStorageFacade) { return 0; }
