#pragma once

#include "CoreMinimal.h"
#include "DBDAIUtilities.h"
#include "DBDAIBTUtilities.generated.h"

UCLASS()
class DBDBOTS_API UDBDAIBTUtilities : public UDBDAIUtilities
{
	GENERATED_BODY()

public:
	UDBDAIBTUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIBTUtilities) { return 0; }
