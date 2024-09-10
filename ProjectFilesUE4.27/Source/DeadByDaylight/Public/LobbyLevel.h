#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EWorldFlowEvent.h"
#include "LobbyLevel.generated.h"

class ADisplayStand;

UCLASS()
class DEADBYDAYLIGHT_API ALobbyLevel : public ALevelScriptActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ADisplayStand*> _registeredDisplayStands;

	UPROPERTY(EditAnywhere)
	EWorldFlowEvent LobbyLoadedEvent;

private:
	UFUNCTION()
	void OnShopSubLevelLoaded();

	UFUNCTION()
	void OnLobbySubLevelLoaded();

	UFUNCTION()
	void OnAdditionalSubLevelsLoaded();

public:
	ALobbyLevel();
};

FORCEINLINE uint32 GetTypeHash(const ALobbyLevel) { return 0; }
