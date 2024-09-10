#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "S3GameConfigs.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API US3GameConfigs : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	US3GameConfigs();
};

FORCEINLINE uint32 GetTypeHash(const US3GameConfigs) { return 0; }
