#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "TestableStat.generated.h"

USTRUCT()
struct FTestableStat: public FTunableStat
{
	GENERATED_BODY()

public:
	DBDGAMEPLAY_API FTestableStat();
};

FORCEINLINE uint32 GetTypeHash(const FTestableStat) { return 0; }
