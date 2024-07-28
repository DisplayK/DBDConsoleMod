#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K25RemoveChainInteraction.generated.h"

class UK25SurvivorChainAttachmentComponent;
class AK25Chain;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25RemoveChainInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _interactionTimePerChainsAttached;

private:
	UPROPERTY(Transient, Export)
	UK25SurvivorChainAttachmentComponent* _cachedSurvivorChainAttachmentComponent;

	UPROPERTY(Transient)
	TWeakObjectPtr<AK25Chain> _chainBeingRemoved;

	UPROPERTY(Transient, Export)
	TWeakObjectPtr<UK25SurvivorChainAttachmentComponent> _chainAttachmentComponent;

public:
	UK25RemoveChainInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25RemoveChainInteraction) { return 0; }
