#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerMalicious.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerMalicious : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<ACamperPlayer*, int32> _remainingSurvivorHookStates;

public:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UDBDEmblem_KillerMalicious();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_KillerMalicious) { return 0; }
