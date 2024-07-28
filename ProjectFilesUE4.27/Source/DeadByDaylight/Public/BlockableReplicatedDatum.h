#pragma once

#include "CoreMinimal.h"
#include "BlockableReplicatedDatum.generated.h"

class ADBDPlayer;
class UObject;

USTRUCT()
struct FBlockableReplicatedDatum
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<UObject>> Sources;

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<ADBDPlayer>> BlockedPlayers;

public:
	DEADBYDAYLIGHT_API FBlockableReplicatedDatum();
};

FORCEINLINE uint32 GetTypeHash(const FBlockableReplicatedDatum) { return 0; }
