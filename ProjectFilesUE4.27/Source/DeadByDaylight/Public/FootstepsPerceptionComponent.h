#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "FootstepsPerceptionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFootstepsPerceptionComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _allowFootstepsSeenPerkFlags;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _disallowFootstepsSeenPerkFlags;

public:
	UFootstepsPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFootstepsPerceptionComponent) { return 0; }
