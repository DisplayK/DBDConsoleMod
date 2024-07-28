#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileDAL.h"
#include "XboxProfileDAL.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UXboxProfileDAL : public UPlayerProfileDAL
{
	GENERATED_BODY()

public:
	UXboxProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UXboxProfileDAL) { return 0; }
