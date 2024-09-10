#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlightPowerEstimatedCollisionIndicator.generated.h"

UCLASS()
class ABlightPowerEstimatedCollisionIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnShowIndicator_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHideIndicator_Cosmetic();

public:
	ABlightPowerEstimatedCollisionIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ABlightPowerEstimatedCollisionIndicator) { return 0; }
