#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CurveFloatNetIdSubsystem.generated.h"

UCLASS()
class UCurveFloatNetIdSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UCurveFloatNetIdSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UCurveFloatNetIdSubsystem) { return 0; }
