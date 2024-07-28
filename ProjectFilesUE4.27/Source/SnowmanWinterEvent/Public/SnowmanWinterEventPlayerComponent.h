#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "SnowmanWinterEventPlayerComponent.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API USnowmanWinterEventPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxTrackedTimeSinceSnowmanExit;

	UPROPERTY(Transient)
	TSet<TWeakObjectPtr<ADBDPlayer>> _previouslyHighFivedPlayers;

public:
	USnowmanWinterEventPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanWinterEventPlayerComponent) { return 0; }
