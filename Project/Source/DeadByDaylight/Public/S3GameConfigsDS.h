#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "S3GameConfigsDS.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API US3GameConfigsDS : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	US3GameConfigsDS();
};

FORCEINLINE uint32 GetTypeHash(const US3GameConfigsDS) { return 0; }
