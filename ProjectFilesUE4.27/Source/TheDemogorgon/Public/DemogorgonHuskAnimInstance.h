#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DemogorgonHuskAnimInstance.generated.h"

class ASlasherPlayer;
class APawn;
class UDemogorgonPortalPlacerStateComponent;
class UAnimSequence;
class UAnimMontage;

UCLASS(NonTransient)
class UDemogorgonHuskAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	APawn* _owningPawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _teleportDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _teleportExitPlayRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _isSlowerExit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _isTeleporting;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _huskPortalSlowerExit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _huskPortalExit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimMontage* _demogorgonPortalExit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimMontage* _demogorgonPortalEntry;

private:
	UPROPERTY(Transient, Export)
	TWeakObjectPtr<UDemogorgonPortalPlacerStateComponent> _demogorgonPortalPlacerState;

private:
	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UDemogorgonHuskAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonHuskAnimInstance) { return 0; }
