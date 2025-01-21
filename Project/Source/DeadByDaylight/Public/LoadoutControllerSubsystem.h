#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadoutControllerSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULoadoutControllerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	ULoadoutControllerSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutControllerSubsystem) { return 0; }
