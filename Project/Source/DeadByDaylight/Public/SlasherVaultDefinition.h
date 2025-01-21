#pragma once

#include "CoreMinimal.h"
#include "VaultDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "Engine/EngineTypes.h"
#include "SlasherVaultDefinition.generated.h"

class ACharacter;
class UAnimMontage;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherVaultDefinition : public UVaultDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAnimationMontageDescriptor _fallMontageID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAnimationMontageDescriptor _crouchMontageID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAnimationMontageDescriptor _defaultMontageID;

private:
	UFUNCTION()
	void OnMovementModeChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

	UFUNCTION()
	void OnMontageBlendingOut(UAnimMontage* montage, bool interrupted);

public:
	USlasherVaultDefinition();
};

FORCEINLINE uint32 GetTypeHash(const USlasherVaultDefinition) { return 0; }
