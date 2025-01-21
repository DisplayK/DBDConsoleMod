#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "ESkillCheckCustomType.h"
#include "ChargeableDefSkillCheckResponse.h"
#include "EChargeableInteractionBarType.h"
#include "ChargeableInteractionDefinition.generated.h"

class ACollectable;
class ADBDPlayer;
class UChargeableComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChargeableInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FChargeableDefSkillCheckResponse SkillCheckResponseAestheticDelegate;

	UPROPERTY(BlueprintAssignable)
	FChargeableDefSkillCheckResponse SkillCheckResponseAuthorityDelegate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool StopInteractionOnChargeComplete;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool HasProgressivelyHarderSkillChecks;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float ProgressiveDifficultyModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChargeableInteractionBarType ProgressBarType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ProgressPips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowItemIcon;

private:
	UPROPERTY(Transient, Export)
	UChargeableComponent* _chargeableComponent;

	UPROPERTY(Transient)
	float _tutorialChargeableMultiplier;

	UPROPERTY(EditAnywhere)
	bool ShowSpeedProficiencyForMultipleInteractors;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _interactionSpecificActionSpeedTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _interactionSpecificActionSpeedMultiplicativeTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _interactionSpecificActionSpeedAdditiveTags;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldShowSpeedProficiencyForMultipleInteractors() const;

	UFUNCTION(BlueprintCallable)
	void SetTutorialChargeableMultiplier(float multiplierValue);

	UFUNCTION(BlueprintCallable)
	void SetSpeedBase(float speedBase);

	UFUNCTION(BlueprintCallable)
	void SetChargeableComponent(UChargeableComponent* chargeableComponent, bool isNullAllowed);

	UFUNCTION(BlueprintImplementableEvent)
	void OnSkillCheckResponseAuthorityBP(ADBDPlayer* player, bool success, bool bonus, bool hadInput, ESkillCheckCustomType type);

protected:
	UFUNCTION()
	void OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSkillCheckResponseAestheticBP(ADBDPlayer* player, bool success, bool bonus, bool hadInput, ESkillCheckCustomType type);

protected:
	UFUNCTION()
	void OnSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionCompletionStateChanged(ADBDPlayer* player, bool complete);

public:
	UFUNCTION(BlueprintPure)
	bool IsChargeComplete(const ADBDPlayer* currentlyInteractingPlayer) const;

	UFUNCTION(BlueprintPure)
	bool HasSkillCheckHappened(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetTunableValue(FName TunableValueID, float defaultValue) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSuccessProbability() const;

	UFUNCTION(BlueprintPure)
	float GetSkillCheckProbability(const ADBDPlayer* interactingPlayer) const;

	UFUNCTION(BlueprintNativeEvent)
	float GetSkillCheckFailureTimePenalty() const;

	UFUNCTION(BlueprintPure)
	float GetSkillCheckFailurePercentPenalty(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSkillCheckDifficulityModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintNativeEvent)
	float GetSkillCheckCharge(ADBDPlayer* player, bool success, bool bonus, ESkillCheckCustomType type) const;

	UFUNCTION(BlueprintPure)
	int32 GetPipsPassed() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetPerkMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetMultiplicativeLuckBonus(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetMaxCharge() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetItemEfficiencyModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintNativeEvent)
	float GetInteractionChargeSpeedMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetGoodSkillCheckSuccessPercentReward(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetChargeSpeedModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetChargeAmountForTime(float deltaSeconds, ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	UChargeableComponent* GetChargeableComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetBonusSkillCheckZoneSizeModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetBonusSkillCheckSuccessPercentReward(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetAdditiveLuckBonus(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetAdditiveChargeTimeReductionAsMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ChargeWithItem(float deltaSeconds, ACollectable* item, ADBDPlayer* character);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddCharge(float deltaSeconds, ADBDPlayer* character, bool isChargeFromItem);

public:
	UChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UChargeableInteractionDefinition) { return 0; }
