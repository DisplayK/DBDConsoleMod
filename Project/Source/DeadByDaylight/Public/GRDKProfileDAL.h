#pragma once

#include "CoreMinimal.h"
#include "PS4GRDKBaseProfileDAL.h"
#include "GRDKProfileDAL.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UGRDKProfileDAL : public UPS4GRDKBaseProfileDAL
{
	GENERATED_BODY()

public:
	UGRDKProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UGRDKProfileDAL) { return 0; }
