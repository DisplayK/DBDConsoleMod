#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventsFactory.generated.h"

UCLASS()
class UEventsFactory : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UEventsFactory();
};

FORCEINLINE uint32 GetTypeHash(const UEventsFactory) { return 0; }
