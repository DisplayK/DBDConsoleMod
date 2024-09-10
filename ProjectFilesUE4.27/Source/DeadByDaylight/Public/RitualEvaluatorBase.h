#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RitualEvent.h"
#include "RitualEvaluatorBase.generated.h"

UCLASS(Blueprintable)
class URitualEvaluatorBase : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	bool EvaluateEvent(const FRitualEvent& ritualEvent);

public:
	URitualEvaluatorBase();
};

FORCEINLINE uint32 GetTypeHash(const URitualEvaluatorBase) { return 0; }
