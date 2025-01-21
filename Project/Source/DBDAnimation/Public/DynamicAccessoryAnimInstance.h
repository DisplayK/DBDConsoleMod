#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DynamicAccessoryAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UDynamicAccessoryAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInMenu;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPoseableHusk;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	TWeakObjectPtr<USkeletalMeshComponent> _masterMesh;

public:
	UDynamicAccessoryAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDynamicAccessoryAnimInstance) { return 0; }
