#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileBank.generated.h"

class ATile;

UCLASS()
class UTileBank : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ATile*> _allTileBlueprints;

public:
	UTileBank();
};

FORCEINLINE uint32 GetTypeHash(const UTileBank) { return 0; }
