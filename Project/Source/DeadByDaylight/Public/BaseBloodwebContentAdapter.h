#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "UObject/NoExportTypes.h"
#include "BaseBloodwebContentAdapter.generated.h"

class IDBDBloodwebDefinitionBase;
class UBloodwebTunables;
class UBloodwebEntity;

UCLASS()
class DEADBYDAYLIGHT_API UBaseBloodwebContentAdapter : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	UBloodwebTunables* _bloodwebTunables;

	UPROPERTY(Transient)
	UBloodwebEntity* _entity;

	UPROPERTY(Transient)
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodwebDefinition;

public:
	UBaseBloodwebContentAdapter();
};

FORCEINLINE uint32 GetTypeHash(const UBaseBloodwebContentAdapter) { return 0; }
