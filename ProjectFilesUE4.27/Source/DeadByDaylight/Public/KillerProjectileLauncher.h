#pragma once

#include "CoreMinimal.h"
#include "BaseProjectileLauncher.h"
#include "KillerProjectileLauncher.generated.h"

class ASlasherPlayer;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerProjectileLauncher : public UBaseProjectileLauncher
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

public:
	UKillerProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UKillerProjectileLauncher) { return 0; }
