#pragma once

#include "CoreMinimal.h"
#include "SearchChestInteractionBase.h"
#include "GameplayTagContainer.h"
#include "OpenChestInteraction.generated.h"

class ADBDPlayer;
class UAnimSequence;
class ACollectable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UOpenChestInteraction : public USearchChestInteractionBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _camperSearchablePercentTag;

	UPROPERTY(EditDefaultsOnly)
	UAnimSequence* _successExitTimeAnimSequenceReference;

	UPROPERTY(Transient)
	float _startTime;

private:
	UFUNCTION(BlueprintCallable)
	void CollectItemIfEmptyHanded(ACollectable* collectable, const ADBDPlayer* player);

public:
	UOpenChestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOpenChestInteraction) { return 0; }
