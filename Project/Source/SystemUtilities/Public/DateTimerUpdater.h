#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DateTimerArray.h"
#include "DateTimerUpdater.generated.h"

class UDateTimeProvider;

UCLASS()
class SYSTEMUTILITIES_API UDateTimerUpdater : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<TSubclassOf<UDateTimeProvider>, FDateTimerArray> _timers;

	UPROPERTY()
	TMap<TSubclassOf<UDateTimeProvider>, UDateTimeProvider*> _dateTimeProvider;

public:
	UDateTimerUpdater();
};

FORCEINLINE uint32 GetTypeHash(const UDateTimerUpdater) { return 0; }
