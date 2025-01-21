#pragma once

#include "CoreMinimal.h"
#include "PS4GRDKBaseProfileDAL.h"
#include "PS4ProfileDAL.generated.h"

UCLASS()
class UPS4ProfileDAL : public UPS4GRDKBaseProfileDAL
{
	GENERATED_BODY()

public:
	UPS4ProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UPS4ProfileDAL) { return 0; }
