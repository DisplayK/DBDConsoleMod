#pragma once

#include "CoreMinimal.h"
#include "ObjectFastArray.h"
#include "Perk.h"
#include "Engine/EngineTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "DetectivesHunch.generated.h"

class AInteractable;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDetectivesHunch : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSet<TSoftClassPtr<AInteractable>> _interactableClasses;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _revealRanges;

	UPROPERTY(EditDefaultsOnly)
	float _revealDuration;

	UPROPERTY(Transient)
	TMap<AActor*, FTimerHandle> _actorToTimerMap;

	UPROPERTY(Replicated, Transient)
	FObjectFastArray _revealedActors;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDetectivesHunch();
};

FORCEINLINE uint32 GetTypeHash(const UDetectivesHunch) { return 0; }
