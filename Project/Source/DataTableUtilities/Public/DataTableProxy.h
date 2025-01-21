#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "DataTableProxy.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FDataTableProxy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSoftObjectPtr<UDataTable> AssetPtr;

private:
	UPROPERTY(Transient)
	UDataTable* _dataTable;

public:
	DATATABLEUTILITIES_API FDataTableProxy();
};

FORCEINLINE uint32 GetTypeHash(const FDataTableProxy) { return 0; }
