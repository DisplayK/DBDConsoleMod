#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SlaveAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class ANIMATIONUTILITIES_API USlaveAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	TWeakObjectPtr<USkeletalMeshComponent> _masterMesh;

public:
	UFUNCTION(BlueprintCallable)
	void SetMasterMesh(USkeletalMeshComponent* masterMesh);

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetMasterMesh() const;

public:
	USlaveAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USlaveAnimInstance) { return 0; }
