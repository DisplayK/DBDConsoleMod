#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem_KillerGatekeeper.h"
#include "DBDEmblem_KillerGatekeeperTest.generated.h"

class ADBDGameState;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerGatekeeperTest : public UDBDEmblem_KillerGatekeeper
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	ADBDGameState* _gameState;

public:
	UDBDEmblem_KillerGatekeeperTest();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_KillerGatekeeperTest) { return 0; }
