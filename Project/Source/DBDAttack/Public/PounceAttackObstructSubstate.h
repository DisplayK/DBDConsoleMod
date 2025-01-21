#pragma once

#include "CoreMinimal.h"
#include "DBDAttackObstructSubstate.h"
#include "PounceAttackObstructSubstate.generated.h"

UCLASS()
class DBDATTACK_API UPounceAttackObstructSubstate : public UDBDAttackObstructSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _fullObstructMontage;

public:
	UPounceAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackObstructSubstate) { return 0; }
