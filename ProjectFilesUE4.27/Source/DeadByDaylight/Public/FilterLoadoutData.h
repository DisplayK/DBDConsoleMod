#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "ELoadoutType.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "FilterLoadoutData.generated.h"

class UTexture2D;

USTRUCT()
struct FFilterLoadoutData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ID;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere)
	FText Title;

	UPROPERTY(EditAnywhere)
	TArray<EPlayerRole> Role;

	UPROPERTY(EditAnywhere)
	ELoadoutType LoadoutType;

public:
	DEADBYDAYLIGHT_API FFilterLoadoutData();
};

FORCEINLINE uint32 GetTypeHash(const FFilterLoadoutData) { return 0; }
