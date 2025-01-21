#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "PlayerInteractable.generated.h"

class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API APlayerInteractable : public AInteractable
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintNativeEvent)
	void InitInteractable(ADBDPlayer* player);

public:
	APlayerInteractable();
};

FORCEINLINE uint32 GetTypeHash(const APlayerInteractable) { return 0; }
