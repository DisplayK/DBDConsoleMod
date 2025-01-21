#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "EOfferingCategory.h"
#include "OfferingCategoryData.generated.h"

USTRUCT()
struct FOfferingCategoryData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EOfferingCategory OfferingCategory;

	UPROPERTY(EditAnywhere)
	TArray<EPlayerRole> Role;

	UPROPERTY(EditAnywhere)
	FItemUIData UIData;

public:
	DEADBYDAYLIGHT_API FOfferingCategoryData();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingCategoryData) { return 0; }
