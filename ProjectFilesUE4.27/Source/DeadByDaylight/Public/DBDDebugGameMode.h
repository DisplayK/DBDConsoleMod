#pragma once

#include "CoreMinimal.h"
#include "DBDGameMode.h"
#include "CamperLoadout.h"
#include "DebugQuestModelExtArchiveObjective.h"
#include "SlasherLoadout.h"
#include "DBDDebugGameMode.generated.h"

class ADBDPlayer;
class ADBDPlayerController;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDDebugGameMode : public ADBDGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<ADBDPlayerController*, int32> LoadoutIndex;

	UPROPERTY()
	TSet<ADBDPlayer*> PlayersWithItems;

	UPROPERTY(EditAnywhere)
	TArray<FCamperLoadout> CamperPawnOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FSlasherLoadout> SlasherPawnOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FDebugQuestModelExtArchiveObjective> _questObjectives;

public:
	ADBDDebugGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDDebugGameMode) { return 0; }
