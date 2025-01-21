#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K28TeleportationIndicator.generated.h"

UCLASS()
class AK28TeleportationIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isActivated;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateIndicatorActivationStatus(const bool isActivated);

public:
	AK28TeleportationIndicator();
};

FORCEINLINE uint32 GetTypeHash(const AK28TeleportationIndicator) { return 0; }
