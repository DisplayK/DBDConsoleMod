#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIEventDispatcher.generated.h"

UCLASS()
class DBDUIMANAGERS_API UUIEventDispatcher : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UUIEventDispatcher();
};

FORCEINLINE uint32 GetTypeHash(const UUIEventDispatcher) { return 0; }
