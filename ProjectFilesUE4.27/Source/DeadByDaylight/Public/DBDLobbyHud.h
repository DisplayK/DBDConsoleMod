#pragma once

#include "CoreMinimal.h"
#include "DBDBaseHud.h"
#include "DBDLobbyHud.generated.h"

UCLASS(NonTransient)
class ADBDLobbyHud : public ADBDBaseHud
{
	GENERATED_BODY()

public:
	ADBDLobbyHud();
};

FORCEINLINE uint32 GetTypeHash(const ADBDLobbyHud) { return 0; }
