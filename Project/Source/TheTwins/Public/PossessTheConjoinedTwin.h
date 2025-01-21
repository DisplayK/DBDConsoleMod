#pragma once

#include "CoreMinimal.h"
#include "PossessPlayer.h"
#include "PossessTheConjoinedTwin.generated.h"

class ADBDPlayer;
class AConjoinedTwin;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPossessTheConjoinedTwin : public UPossessPlayer
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnTwinSet(AConjoinedTwin* twin);

	UFUNCTION()
	void OnPowerCollected(ADBDPlayer* collector);

public:
	UPossessTheConjoinedTwin();
};

FORCEINLINE uint32 GetTypeHash(const UPossessTheConjoinedTwin) { return 0; }
