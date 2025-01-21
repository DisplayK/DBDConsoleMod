#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "RepairGeneratorSubAnimInstance.generated.h"

class UAnimSequence;
class AGenerator;
class ACamperPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API URepairGeneratorSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	AGenerator* _owningGenerator;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingRepaired;

	UPROPERTY(BlueprintReadOnly)
	ACamperPlayer* _repairingSurvivor;

	UPROPERTY(BlueprintReadOnly)
	UAnimSequence* _animSequence;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _interactionTag;

	UPROPERTY(BlueprintReadOnly, Transient)
	FGameplayTag _currentAnimId;

	UPROPERTY(EditDefaultsOnly)
	TMap<FGameplayTag, UAnimSequence*> _taggedAnimSequences;

public:
	URepairGeneratorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const URepairGeneratorSubAnimInstance) { return 0; }
