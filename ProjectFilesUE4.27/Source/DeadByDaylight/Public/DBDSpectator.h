#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "DBDSpectator.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDSpectator : public ASpectatorPawn
{
	GENERATED_BODY()

public:
	ADBDSpectator();
};

FORCEINLINE uint32 GetTypeHash(const ADBDSpectator) { return 0; }
