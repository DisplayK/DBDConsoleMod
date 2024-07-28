#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterRotationStrategy.h"
#include "K25SurvivorChainRotationStrategy.generated.h"

class UK25SurvivorChainAttachmentComponent;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainRotationStrategy : public UBaseCharacterRotationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<ACamperPlayer> _cachedSurvivor;

	UPROPERTY(Transient, Export)
	UK25SurvivorChainAttachmentComponent* _cachedChainAttachmentComponent;

public:
	UK25SurvivorChainRotationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK25SurvivorChainRotationStrategy) { return 0; }
