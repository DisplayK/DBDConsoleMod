#pragma once

#include "CoreMinimal.h"
#include "PlayerCapsuleQueryParams.generated.h"

class ADBDPlayer;
class AActor;

USTRUCT()
struct FPlayerCapsuleQueryParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ADBDPlayer* Player;

	UPROPERTY()
	TSet<AActor*> IgnoreActors;

public:
	DEADBYDAYLIGHT_API FPlayerCapsuleQueryParams();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCapsuleQueryParams) { return 0; }
