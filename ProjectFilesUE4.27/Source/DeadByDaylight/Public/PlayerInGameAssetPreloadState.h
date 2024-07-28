#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInGameAssetPreloadState.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerInGameAssetPreloadState : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(Server, Reliable)
	void Server_SetPreloadCompleted();

public:
	UPlayerInGameAssetPreloadState();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerInGameAssetPreloadState) { return 0; }
