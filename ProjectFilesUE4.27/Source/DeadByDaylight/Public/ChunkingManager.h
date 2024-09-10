#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChunkingManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UChunkingManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

public:
	UChunkingManager();
};

FORCEINLINE uint32 GetTypeHash(const UChunkingManager) { return 0; }
