#pragma once

#include "CoreMinimal.h"
#include "ELoadoutItemType.h"
#include "EvaluatorCondition.h"
#include "HasItemTypeEvaluatorCondition.generated.h"

UCLASS()
class ARCHIVES_API UHasItemTypeEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	ELoadoutItemType _itemType;

public:
	UHasItemTypeEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemTypeEvaluatorCondition) { return 0; }
