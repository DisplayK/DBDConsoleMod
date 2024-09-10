#pragma once

#include "CoreMinimal.h"
#include "AtlantaTutorialLevel.h"
#include "SurvivorAtlantaTutorialLevel.generated.h"

class ADBDAIPlayerController;
class ASlasherPlayer;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ASurvivorAtlantaTutorialLevel : public AAtlantaTutorialLevel
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetSlasherPlayer(ASlasherPlayer* slasherPlayer);

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetSlasherPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDAIPlayerController* GetSlasherAIPlayerController() const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetCamperPlayer() const;

public:
	ASurvivorAtlantaTutorialLevel();
};

FORCEINLINE uint32 GetTypeHash(const ASurvivorAtlantaTutorialLevel) { return 0; }
