#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "TwinJumpTargetVisibleEffect.generated.h"

class AActor;
class USelectiveVisibilityComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinJumpTargetVisibleEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _twinJumpTargetObject;

	UPROPERTY(Transient)
	AActor* _twinJumpTarget;

	UPROPERTY(Transient, Export)
	USelectiveVisibilityComponent* _jumpTargetVisibility;

private:
	UFUNCTION()
	void OnJumpTargetTick(FVector location);

	UFUNCTION()
	void OnHideTargetPosition();

public:
	UTwinJumpTargetVisibleEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpTargetVisibleEffect) { return 0; }
