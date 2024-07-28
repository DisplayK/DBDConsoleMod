#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebEntity.generated.h"

class UDBDGameInstance;
class IDBDBloodwebDefinitionBase;
class UBloodwebTunables;

UCLASS()
class UBloodwebEntity : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(Transient)
	UBloodwebTunables* _bloodwebTunables;

	UPROPERTY(Transient)
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition;

public:
	UBloodwebEntity();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebEntity) { return 0; }
