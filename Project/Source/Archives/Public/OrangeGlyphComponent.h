#pragma once

#include "CoreMinimal.h"
#include "OrangeGlyphAffectedActionTakenDelegate.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "OrangeGlyphChallengeCompletedDelegate.h"
#include "OrangeGlyphComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOrangeGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOrangeGlyphChallengeCompletedDelegate ChallengeCompletedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOrangeGlyphAffectedActionTakenDelegate AffectedActionTakenDelegate;

protected:
	UPROPERTY(EditDefaultsOnly)
	int32 _numHookedSurvivorsRequired;

	UPROPERTY(EditDefaultsOnly)
	int32 _numInactiveHookStatesToDespawn;

	UPROPERTY(VisibleAnywhere)
	int32 _numHookActionsWhileActive;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _hookEvents;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _hookStateEvents;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _statusEffectClasses;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _eventsThatCauseEffects;

private:
	UFUNCTION(BlueprintCosmetic)
	void Cosmetic_ApplyNegativeEffects(ADBDPlayer* affectedPlayer);

public:
	UOrangeGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOrangeGlyphComponent) { return 0; }
