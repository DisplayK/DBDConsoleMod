#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "BreathingSurvivorSubAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class DBDANIMATION_API UBreathingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isDead;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _breathing;

public:
	UBreathingSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBreathingSurvivorSubAnimInstance) { return 0; }
