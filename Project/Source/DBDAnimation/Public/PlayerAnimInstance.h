#pragma once

#include "CoreMinimal.h"
#include "Activatable.h"
#include "DBDBaseAnimInstance.h"
#include "TaggedAnimCollection.h"
#include "AnimSequenceSelector.h"
#include "GameplayTagContainer.h"
#include "ActivationDefinition.h"
#include "PlayerAnimInstance.generated.h"

class UAimOffsetBlendSpace1D;
class UAnimSequence;
class UBlendSpace;
class ADBDPlayer;
class UAimOffsetBlendSpace;
class UBlendSpace1D;

UCLASS(NonTransient)
class DBDANIMATION_API UPlayerAnimInstance : public UDBDBaseAnimInstance, public IActivatable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	ADBDPlayer* _owningPlayer;

	UPROPERTY(EditDefaultsOnly)
	TArray<FTaggedAnimCollection> _taggedAnimCollections;

	UPROPERTY(BlueprintReadOnly, Transient)
	TMap<FGameplayTag, UAnimSequence*> _animations;

	UPROPERTY(BlueprintReadOnly, Transient)
	TMap<FGameplayTag, UBlendSpace*> _blendspaces;

	UPROPERTY(BlueprintReadOnly, Transient)
	TMap<FGameplayTag, UAimOffsetBlendSpace*> _aimoffsets;

	UPROPERTY(BlueprintReadOnly, Transient)
	TMap<FGameplayTag, UBlendSpace1D*> _blendspaces1d;

	UPROPERTY(BlueprintReadOnly, Transient)
	TMap<FGameplayTag, UAimOffsetBlendSpace1D*> _aimoffsets1d;

	UPROPERTY(BlueprintReadOnly, Transient)
	TMap<FGameplayTag, FAnimSequenceSelector> _selectors;

	UPROPERTY(BlueprintReadOnly)
	bool _isInParadise;

	UPROPERTY(BlueprintReadOnly)
	bool _isIntroCompleted;

	UPROPERTY(BlueprintReadOnly)
	bool _isLevelReadyToPlay;

	UPROPERTY(EditDefaultsOnly)
	FActivationDefinition _activationDefinition;

	UPROPERTY(BlueprintReadOnly)
	float _interactionDuration;

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnIntroCompleted();

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOwningPlayer() const;

public:
	UPlayerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerAnimInstance) { return 0; }
