#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileDAL.h"
#include "SteamProfileDAL.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USteamProfileDAL : public UPlayerProfileDAL
{
	GENERATED_BODY()

public:
	USteamProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const USteamProfileDAL) { return 0; }
