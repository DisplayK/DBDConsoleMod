#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionDefinition.h"
#include "VaultDefinition.generated.h"

class ADBDPlayer;
class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag _vaultGameEvent;

	UPROPERTY(EditDefaultsOnly)
	FName _feetOffGroundID;

	UPROPERTY(EditDefaultsOnly)
	FName _feetOnGroundID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _allowedHeightDelta;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _animationPlayRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _scaledElapsedTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCurveFloat* _vaultSpeedCurve;

	UPROPERTY(BlueprintReadOnly)
	bool _isFall;

protected:
	UFUNCTION(BlueprintPure)
	bool ShouldLaunchCharacter(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsWithinHeightDelta(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsWindowVaultable() const;

	UFUNCTION(BlueprintPure)
	UCurveFloat* GetSpeedCurveToUse() const;

public:
	UVaultDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UVaultDefinition) { return 0; }
