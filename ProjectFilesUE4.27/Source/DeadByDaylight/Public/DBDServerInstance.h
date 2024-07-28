#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDServerInstance.generated.h"

class UDBDHostSettingsParamsBase;
class UDBDGameInstance;

UCLASS(Transient)
class DEADBYDAYLIGHT_API UDBDServerInstance : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UDBDHostSettingsParamsBase*> _pendingSessionUpdates;

	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

public:
	UDBDServerInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDBDServerInstance) { return 0; }
