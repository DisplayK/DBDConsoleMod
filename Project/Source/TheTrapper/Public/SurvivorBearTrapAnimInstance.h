#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "SurvivorBearTrapAnimInstance.generated.h"

UCLASS(NonTransient)
class USurvivorBearTrapAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isTrapped;

	UPROPERTY(BlueprintReadOnly, Transient)
	EInteractionAnimation _interactionType;

public:
	USurvivorBearTrapAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorBearTrapAnimInstance) { return 0; }
