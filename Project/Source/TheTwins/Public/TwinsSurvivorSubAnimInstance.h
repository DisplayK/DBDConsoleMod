#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "TwinsSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UTwinsSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isRemovingTwin;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouching;

public:
	UTwinsSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTwinsSurvivorSubAnimInstance) { return 0; }
