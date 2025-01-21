#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MatchHandler.generated.h"

UCLASS()
class UMatchHandler : public UObject
{
	GENERATED_BODY()

public:
	UMatchHandler();
};

FORCEINLINE uint32 GetTypeHash(const UMatchHandler) { return 0; }
