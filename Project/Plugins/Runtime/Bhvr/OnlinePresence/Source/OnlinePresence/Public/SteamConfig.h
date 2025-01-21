#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SteamConfig.generated.h"

UCLASS()
class ONLINEPRESENCE_API USteamConfig : public UObject
{
	GENERATED_BODY()

public:
	USteamConfig();
};

FORCEINLINE uint32 GetTypeHash(const USteamConfig) { return 0; }
