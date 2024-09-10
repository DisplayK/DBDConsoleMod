#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LamentConfigurationSpawnInfo.generated.h"

USTRUCT()
struct FLamentConfigurationSpawnInfo
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FVector _worldLocation;

public:
	THEK25_API FLamentConfigurationSpawnInfo();
};

FORCEINLINE uint32 GetTypeHash(const FLamentConfigurationSpawnInfo) { return 0; }
