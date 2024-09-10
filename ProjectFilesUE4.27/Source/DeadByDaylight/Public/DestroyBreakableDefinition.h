#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "DestroyBreakableDefinition.generated.h"

class ABreakableBase;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDestroyBreakableDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _interactionTimePercentForDestroyEvent;

private:
	UPROPERTY(Transient)
	ABreakableBase* _breakable;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _fastInteractionAnimThreshold;

protected:
	UFUNCTION(BlueprintPure)
	ABreakableBase* GetBreakable() const;

public:
	UDestroyBreakableDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UDestroyBreakableDefinition) { return 0; }
