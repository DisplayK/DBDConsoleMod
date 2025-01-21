#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TwinHuskAnimInstance.generated.h"

class APawn;
class UTwinHuskStateComponent;

UCLASS(NonTransient)
class UTwinHuskAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDeadFromSurvivorBack;

private:
	UPROPERTY(Transient)
	APawn* _owningPawn;

	UPROPERTY(Transient, Export)
	UTwinHuskStateComponent* _twinHuskStateComponent;

public:
	UTwinHuskAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTwinHuskAnimInstance) { return 0; }
