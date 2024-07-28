#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K24PounceAttack.generated.h"

class AZombieCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK24PounceAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UFUNCTION(Server, Reliable)
	void Server_HitZombie(AZombieCharacter* zombie, const float targetLocationTimestamp);

public:
	UK24PounceAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK24PounceAttack) { return 0; }
