#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SplinteredStatesSubsystem.generated.h"

UCLASS()
class SPLINTEREDSTATES_API USplinteredStatesSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	USplinteredStatesSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const USplinteredStatesSubsystem) { return 0; }
