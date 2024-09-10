#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "ThrowingKnivesHitSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UThrowingKnivesHitSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Transient)
	bool _hitByKnifeTrigger;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _knifeHitCausedKOTrigger;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _knifeHitCausedDamageTrigger;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _useAlternateHitReactionState;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _knifeHitStateHitAngle;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _alternateKnifeHitStateHitAngle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _hitByKnifeTriggerEventDriven;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _knifeHitCausedDamageTriggerEventDriven;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _knifeHitCausedKOTriggerEventDriven;

public:
	UThrowingKnivesHitSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UThrowingKnivesHitSubAnimInstance) { return 0; }
