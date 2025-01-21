#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CrowdChoiceManager.generated.h"

UCLASS()
class PLATFORMUTILITIES_API UCrowdChoiceManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UCrowdChoiceManager();
};

FORCEINLINE uint32 GetTypeHash(const UCrowdChoiceManager) { return 0; }
