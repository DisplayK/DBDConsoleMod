#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerProfileDAL.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UPlayerProfileDAL : public UObject
{
	GENERATED_BODY()

public:
	UPlayerProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerProfileDAL) { return 0; }
