#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BackendLoadoutManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBackendLoadoutManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UBackendLoadoutManager();
};

FORCEINLINE uint32 GetTypeHash(const UBackendLoadoutManager) { return 0; }
