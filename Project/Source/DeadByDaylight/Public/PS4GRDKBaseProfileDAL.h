#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileDAL.h"
#include "PS4GRDKBaseProfileDAL.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UPS4GRDKBaseProfileDAL : public UPlayerProfileDAL
{
	GENERATED_BODY()

public:
	UPS4GRDKBaseProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UPS4GRDKBaseProfileDAL) { return 0; }
