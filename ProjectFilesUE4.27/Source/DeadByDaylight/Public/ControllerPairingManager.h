#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControllerPairingManager.generated.h"

class UDBDGameInstance;

UCLASS()
class UControllerPairingManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

public:
	UControllerPairingManager();
};

FORCEINLINE uint32 GetTypeHash(const UControllerPairingManager) { return 0; }
