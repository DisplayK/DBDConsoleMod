#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerDevout.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerDevout : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _playersToHook;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UDBDEmblem_KillerDevout();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_KillerDevout) { return 0; }
