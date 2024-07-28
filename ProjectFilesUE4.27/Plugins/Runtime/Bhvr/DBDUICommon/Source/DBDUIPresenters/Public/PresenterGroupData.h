#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "Templates/SubclassOf.h"
#include "PresenterGroupData.generated.h"

class UPresenterGroup;

USTRUCT(BlueprintType)
struct FPresenterGroupData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UPresenterGroup> PresenterGroup;

public:
	DBDUIPRESENTERS_API FPresenterGroupData();
};

FORCEINLINE uint32 GetTypeHash(const FPresenterGroupData) { return 0; }
