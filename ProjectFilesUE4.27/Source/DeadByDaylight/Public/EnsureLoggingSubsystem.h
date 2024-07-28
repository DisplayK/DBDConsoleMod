#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EnsureLoggingSubsystem.generated.h"

UCLASS()
class UEnsureLoggingSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UEnsureLoggingSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UEnsureLoggingSubsystem) { return 0; }
