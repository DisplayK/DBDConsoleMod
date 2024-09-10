#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "CharacterCustomizationDataTable.generated.h"

class UDataTable;

USTRUCT()
struct FCharacterCustomizationDataTable: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDataTable> CustomizationStoreDB;

public:
	DEADBYDAYLIGHT_API FCharacterCustomizationDataTable();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomizationDataTable) { return 0; }
