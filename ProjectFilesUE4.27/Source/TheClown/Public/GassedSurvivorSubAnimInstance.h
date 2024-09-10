#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "GassedSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UGassedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isGassed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

public:
	UGassedSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGassedSurvivorSubAnimInstance) { return 0; }
