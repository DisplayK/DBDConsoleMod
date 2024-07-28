#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "ECustomizationCategory.h"
#include "CustomizedMeshPart.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedMeshPart
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere)
	FDataTableDropdown DefaultItemId;

	UPROPERTY(EditAnywhere)
	FName SocketName;

public:
	DEADBYDAYLIGHT_API FCustomizedMeshPart();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizedMeshPart) { return 0; }
