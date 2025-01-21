#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SpiritHuskAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class USpiritHuskAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _killerMesh;

public:
	USpiritHuskAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USpiritHuskAnimInstance) { return 0; }
