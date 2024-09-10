#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierContainer.h"
#include "GameplayModifierData.h"
#include "OnTokenCountChangedBP.h"
#include "Templates/SubclassOf.h"
#include "PerkInitializationData.h"
#include "EPerkTokenSoundStrategy.h"
#include "Perk.generated.h"

class UInteractionDefinition;
class UTimerObject;
class UBasePerkIconStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerk : public UGameplayModifierContainer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize, ReplicatedUsing=OnRep_ModifierData)
	FGameplayModifierData PerkLevelData;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UBasePerkIconStrategy> PerkIconStrategyClass;

	UPROPERTY(BlueprintAssignable)
	FOnTokenCountChangedBP OnTokenCountChangedBP;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsUsable, meta=(AllowPrivateAccess=true))
	bool _isUsable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BroadcastWhenApplicable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BroadcastOnTimer;

	UPROPERTY(EditAnywhere)
	bool BroadcastCooldownTimer;

	UPROPERTY(EditAnywhere)
	bool BroadcastInactiveCooldownTimer;

	UPROPERTY(EditAnywhere)
	bool BroadcastAlways;

	UPROPERTY(Transient)
	UBasePerkIconStrategy* _perkIconStrategy;

	UPROPERTY(ReplicatedUsing=OnRep_PerkInitializationData, Transient)
	FPerkInitializationData _perkInitializationData;

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_TokenCount, Transient, meta=(AllowPrivateAccess=true))
	int32 _tokenCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _maxTokenCount;

	UPROPERTY(EditDefaultsOnly)
	EPerkTokenSoundStrategy _tokenSoundStrategy;

	UPROPERTY(ReplicatedUsing=OnRep_CooldownTimer, Transient, Export)
	UTimerObject* _cooldownTimer;

	UPROPERTY(Replicated, Transient, Export)
	UTimerObject* _hudIconTimer;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _activatableInteraction;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsUsable(bool value);

private:
	UFUNCTION()
	void OnRep_TokenCount(int32 oldCount);

	UFUNCTION()
	void OnRep_PerkInitializationData();

	UFUNCTION()
	void OnRep_IsUsable() const;

	UFUNCTION()
	void OnRep_CooldownTimer() const;

public:
	UFUNCTION(BlueprintPure)
	bool IsHudIconTimerDone() const;

	UFUNCTION(BlueprintPure)
	bool IsCooldownTimerDone() const;

	UFUNCTION(BlueprintPure)
	int32 GetTokenCount() const;

	UFUNCTION(BlueprintPure)
	int32 GetPerkLevel() const;

protected:
	UFUNCTION(BlueprintPure)
	UBasePerkIconStrategy* GetPerkIconStrategy() const;

public:
	UFUNCTION(BlueprintPure)
	int32 GetMaxTokenCount() const;

	UFUNCTION(BlueprintPure)
	bool GetIsUsable() const;

	UFUNCTION(BlueprintPure)
	float GetHudIconTimerElapsedTimePercent() const;

	UFUNCTION(BlueprintCallable)
	FGameplayModifierData GetGameplayModifierData();

protected:
	UFUNCTION(BlueprintPure)
	UTimerObject* GetCooldownTimer() const;

public:
	UFUNCTION(BlueprintCallable)
	void FireActivePerkEvent(const float percentage, const int32 chargeCount);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TriggerHudIconTimer(float duration);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TriggerCooldownTimer(const float coolddownTime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetMaxTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsUsable(bool value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_IncrementToken();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DecrementToken();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPerk();
};

FORCEINLINE uint32 GetTypeHash(const UPerk) { return 0; }
