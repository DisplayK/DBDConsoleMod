#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileDAL.h"
#include "SwitchProfileDAL.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USwitchProfileDAL : public UPlayerProfileDAL
{
	GENERATED_BODY()

public:
	USwitchProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const USwitchProfileDAL) { return 0; }
