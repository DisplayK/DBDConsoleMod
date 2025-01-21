#pragma once

#include "CoreMinimal.h"
#include "DDosGameConfigDS.h"
#include "S3GameConfigsDSData.generated.h"

USTRUCT()
struct FS3GameConfigsDSData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FDDosGameConfigDS Ddos;

public:
	DEADBYDAYLIGHT_API FS3GameConfigsDSData();
};

FORCEINLINE uint32 GetTypeHash(const FS3GameConfigsDSData) { return 0; }
