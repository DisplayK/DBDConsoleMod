#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "HookSurvivorDefinition.generated.h"

class ACamperPlayer;
class AMeatHook;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHookSurvivorDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	ACamperPlayer* _survivorBeingHooked;

protected:
	UFUNCTION(BlueprintPure)
	AMeatHook* GetMeatHook() const;

public:
	UHookSurvivorDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UHookSurvivorDefinition) { return 0; }
