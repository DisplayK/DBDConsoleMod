#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "BaseLockerInteraction.generated.h"

class ALocker;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UBaseLockerInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	ALocker* _owningLocker;

private:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _lockerPreventingTags;

	UPROPERTY(EditDefaultsOnly)
	bool _lockerIsMontageFollower;

public:
	UBaseLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseLockerInteraction) { return 0; }
