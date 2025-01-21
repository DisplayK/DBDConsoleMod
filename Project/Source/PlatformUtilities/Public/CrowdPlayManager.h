#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CrowdPlayManager.generated.h"

UCLASS()
class UCrowdPlayManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UCrowdPlayManager();
};

FORCEINLINE uint32 GetTypeHash(const UCrowdPlayManager) { return 0; }
