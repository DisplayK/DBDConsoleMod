#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ConnectionStatusSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UConnectionStatusSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UConnectionStatusSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UConnectionStatusSubsystem) { return 0; }
