#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorOutlineUpdateStrategy.generated.h"

class UGameplayModifierContainer;
class ACamperPlayer;
class UTexture;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _inDangerColorForSurvivor;

	UPROPERTY(Transient)
	FLinearColor _noRecoveryDyingColor;

	UPROPERTY(Transient)
	FLinearColor _fullRecoveryDyingColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _saviourColorForSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _colorForKiller;

	UPROPERTY(EditInstanceOnly)
	UTexture* _revealedGradient;

	UPROPERTY(EditInstanceOnly)
	UTexture* _nonRevealedGradient;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _revealToKillerDurationTags;

	UPROPERTY(Transient)
	float _revealToKillerLingerTimer;

	UPROPERTY(Transient)
	bool _trappedIconActive;

public:
	UFUNCTION(BlueprintCallable)
	void SetTrappedIconActive(bool value);

	UFUNCTION(BlueprintPure)
	bool IsBlockingAuraReadingFromKiller(const ASlasherPlayer* killer) const;

	UFUNCTION(BlueprintCallable)
	static bool IsActivelyHidingAuraFromKiller(const ACamperPlayer* subject, const ASlasherPlayer* witness);

	UFUNCTION(BlueprintCallable)
	static TArray<UGameplayModifierContainer*> GetEffectsProtectingFromKillerAuraReading(const ACamperPlayer* subject, const ASlasherPlayer* killer);

public:
	USurvivorOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorOutlineUpdateStrategy) { return 0; }
