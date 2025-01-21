#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CrowAnimInstance.generated.h"

class UWorldRunawayMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UCrowAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _shouldTakeOff;

private:
	UPROPERTY(Transient, Export)
	UWorldRunawayMeshComponent* _crow;

public:
	UCrowAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UCrowAnimInstance) { return 0; }
