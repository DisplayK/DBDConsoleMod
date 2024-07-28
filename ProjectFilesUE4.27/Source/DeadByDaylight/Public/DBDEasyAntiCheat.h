#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDEasyAntiCheat.generated.h"

class UDBDGameInstance;

UCLASS()
class UDBDEasyAntiCheat : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(Transient)
	bool _connectedToServer;

public:
	UDBDEasyAntiCheat();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEasyAntiCheat) { return 0; }
