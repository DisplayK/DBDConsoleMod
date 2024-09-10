#pragma once

#include "CoreMinimal.h"
#include "DisplayStandController.h"
#include "LobbyDisplayStandController.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULobbyDisplayStandController : public UDisplayStandController
{
	GENERATED_BODY()

public:
	ULobbyDisplayStandController();
};

FORCEINLINE uint32 GetTypeHash(const ULobbyDisplayStandController) { return 0; }
