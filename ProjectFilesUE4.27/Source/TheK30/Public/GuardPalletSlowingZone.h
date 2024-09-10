#pragma once

#include "CoreMinimal.h"
#include "GuardSlowingZone.h"
#include "GuardPalletSlowingZone.generated.h"

class APallet;

UCLASS()
class THEK30_API AGuardPalletSlowingZone : public AGuardSlowingZone
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_LinkedPallet)
	APallet* _linkedPallet;

private:
	UFUNCTION()
	void OnRep_LinkedPallet();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AGuardPalletSlowingZone();
};

FORCEINLINE uint32 GetTypeHash(const AGuardPalletSlowingZone) { return 0; }
