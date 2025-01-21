#pragma once

#include "CoreMinimal.h"
#include "FSM_State.h"
#include "K25ChainStrikeBaseState.generated.h"

class ADBDPlayer;
class AK25Power;
class AK25Gateway;

UCLASS(BlueprintType, Abstract)
class UK25ChainStrikeBaseState : public UFSM_State
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSet<FName> _secondaryInteractionIDs;

protected:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPlayerOwner() const;

	UFUNCTION(BlueprintPure)
	AK25Power* GetK25Power() const;

	UFUNCTION(BlueprintPure)
	AK25Gateway* GetK25Gateway() const;

public:
	UK25ChainStrikeBaseState();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeBaseState) { return 0; }
