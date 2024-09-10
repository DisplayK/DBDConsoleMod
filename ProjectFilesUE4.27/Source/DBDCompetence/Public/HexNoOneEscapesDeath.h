#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexNoOneEscapesDeath.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexNoOneEscapesDeath : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteImposedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exposedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	bool _revealCurseWhenTotemShownToSurvivor;

	UPROPERTY(EditDefaultsOnly)
	bool _revealCurseWhenSurvivorGetHits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _auraRevealStartDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _auraRevealEndDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _auraRevealDuration;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hastePerLevel;

	UPROPERTY(ReplicatedUsing=OnRep_SetShouldActivateTotemOutline)
	bool _shouldActivateTotemOutline;

private:
	UFUNCTION()
	void OnRep_SetShouldActivateTotemOutline();

public:
	UFUNCTION(BlueprintPure)
	float GetHasteAtLevel();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHexNoOneEscapesDeath();
};

FORCEINLINE uint32 GetTypeHash(const UHexNoOneEscapesDeath) { return 0; }
