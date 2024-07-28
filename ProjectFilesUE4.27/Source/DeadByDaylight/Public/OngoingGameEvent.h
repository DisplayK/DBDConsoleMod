#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameEventData.h"
#include "OngoingGameEvent.generated.h"

UCLASS()
class UOngoingGameEvent : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	FGameEventData _eventData;

public:
	UOngoingGameEvent();
};

FORCEINLINE uint32 GetTypeHash(const UOngoingGameEvent) { return 0; }
