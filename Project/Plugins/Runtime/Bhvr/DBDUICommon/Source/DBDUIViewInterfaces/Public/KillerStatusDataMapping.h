#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "KillerStatusDataMapping.generated.h"

class UKillerStatusData;
class UObject;

USTRUCT(BlueprintType)
struct FKillerStatusDataMapping: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Killer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UKillerStatusData> ViewDataClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UObject> WidgetClass;

public:
	DBDUIVIEWINTERFACES_API FKillerStatusDataMapping();
};

FORCEINLINE uint32 GetTypeHash(const FKillerStatusDataMapping) { return 0; }
