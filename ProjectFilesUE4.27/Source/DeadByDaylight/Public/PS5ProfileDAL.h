#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileDAL.h"
#include "PS5ProfileDAL.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPS5ProfileDAL : public UPlayerProfileDAL
{
	GENERATED_BODY()

public:
	UPS5ProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UPS5ProfileDAL) { return 0; }
