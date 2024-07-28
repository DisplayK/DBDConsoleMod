#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LobbyPositionsSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULobbyPositionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	ULobbyPositionsSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const ULobbyPositionsSubsystem) { return 0; }
