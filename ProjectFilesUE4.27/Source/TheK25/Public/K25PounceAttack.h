#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K25PounceAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25PounceAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DownedTargetHoldingLamentConfiguration();

	UFUNCTION(Client, Reliable)
	void Client_InvalidateDownedTargetHoldingLamentConfiguration();

public:
	UK25PounceAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK25PounceAttack) { return 0; }
