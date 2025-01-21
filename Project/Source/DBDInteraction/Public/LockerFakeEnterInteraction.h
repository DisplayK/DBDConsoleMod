#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "DBDTunableRowHandle.h"
#include "LockerFakeEnterInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API ULockerFakeEnterInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _lockerInteractionBlockTime;

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _fakeEnterLoudNoiseRange;

public:
	ULockerFakeEnterInteraction();
};

FORCEINLINE uint32 GetTypeHash(const ULockerFakeEnterInteraction) { return 0; }
