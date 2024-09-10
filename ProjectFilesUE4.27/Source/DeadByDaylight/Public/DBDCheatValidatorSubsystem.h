#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "DBDCheatValidatorSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDCheatValidatorSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	UDBDCheatValidatorSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCheatValidatorSubsystem) { return 0; }
