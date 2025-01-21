#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlinePrivilegeManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UOnlinePrivilegeManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UOnlinePrivilegeManager();
};

FORCEINLINE uint32 GetTypeHash(const UOnlinePrivilegeManager) { return 0; }
