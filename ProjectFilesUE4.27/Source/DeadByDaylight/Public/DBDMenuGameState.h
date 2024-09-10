#pragma once

#include "CoreMinimal.h"
#include "DBDGameState.h"
#include "DBDMenuGameState.generated.h"

class UMenuForcedLODHandler;

UCLASS()
class ADBDMenuGameState : public ADBDGameState
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Export)
	UMenuForcedLODHandler* _menuForcedLODHandler;

public:
	ADBDMenuGameState();
};

FORCEINLINE uint32 GetTypeHash(const ADBDMenuGameState) { return 0; }
