#pragma once

#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "BaseKillerAnimInstance.generated.h"

class ASlasherPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UBaseKillerAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _firstPersonView;

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

private:
	UFUNCTION(Exec)
	void DBD_ForceAnimPOV(const int32 animPOV);

public:
	UBaseKillerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBaseKillerAnimInstance) { return 0; }
