#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AIBotsManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAIBotsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UAIBotsManager();
};

FORCEINLINE uint32 GetTypeHash(const UAIBotsManager) { return 0; }
