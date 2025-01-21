#pragma once

#include "CoreMinimal.h"
#include "DBDBloodwebDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "DBDBloodWebDefinition.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDBloodWebDefinition : public UObject, public IDBDBloodwebDefinitionBase
{
	GENERATED_BODY()

public:
	UDBDBloodWebDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBloodWebDefinition) { return 0; }
