#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAttackSubAnimInstance.h"
#include "KillerAttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UKillerAttackSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isCarrying;

	UPROPERTY(BlueprintReadOnly)
	bool _isActive;

public:
	UKillerAttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UKillerAttackSubAnimInstance) { return 0; }
