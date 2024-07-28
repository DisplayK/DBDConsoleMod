#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "RBTOutlineUpdateStrategy.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API URBTOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsRevealedToLocalPlayer_BP(const ADBDPlayer* player) const;

public:
	URBTOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URBTOutlineUpdateStrategy) { return 0; }
