#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "RememberMe.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class URememberMe : public UPerk
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool DidLoseHealthState(const AActor* damagedActor, int32 oldHealthStateCount) const;

public:
	URememberMe();
};

FORCEINLINE uint32 GetTypeHash(const URememberMe) { return 0; }
