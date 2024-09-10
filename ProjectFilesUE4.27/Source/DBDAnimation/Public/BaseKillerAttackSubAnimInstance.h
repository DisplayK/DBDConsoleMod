#pragma once

#include "CoreMinimal.h"
#include "BasePlayerAttackSubAnimInstance.h"
#include "BaseKillerAttackSubAnimInstance.generated.h"

class ASlasherPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UBaseKillerAttackSubAnimInstance : public UBasePlayerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	ASlasherPlayer* _owningKiller;

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

public:
	UBaseKillerAttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBaseKillerAttackSubAnimInstance) { return 0; }
