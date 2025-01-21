#pragma once

#include "CoreMinimal.h"
#include "DBDBloodwebDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "DBDAtlantaBloodwebDefinition.generated.h"

UCLASS()
class UDBDAtlantaBloodwebDefinition : public UObject, public IDBDBloodwebDefinitionBase
{
	GENERATED_BODY()

public:
	UDBDAtlantaBloodwebDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAtlantaBloodwebDefinition) { return 0; }
