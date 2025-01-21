#pragma once

#include "CoreMinimal.h"
#include "EAttachToSocketNameEnum.h"
#include "ELoadoutItemType.h"
#include "ECollectableCategory.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "EAtlantaItemProgressionBarEnum.h"
#include "EItemHandPosition.h"
#include "EInputInteractionType.h"
#include "ECollectableState.h"
#include "EInventoryType.h"
#include "Engine/EngineTypes.h"
#include "Collectable.generated.h"

class AActor;
class USkeletalMeshComponent;
class UItemAddon;
class UInteractor;
class UGameplayTagContainerComponent;
class UItemModifier;
class USceneComponent;
class ADBDPlayer;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ACollectable : public AInteractable
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCollectorSetBPDelegate, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectorSetBP, ADBDPlayer*, player);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisplayUsePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAtlantaItemProgressionBarEnum ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OverrideItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OverridenItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StrafeOnUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool VisibleWhenEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopRunningOnUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemHandPosition HandPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisableArmOverrideDuringInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasUseInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ECollectableCategory Category;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FName ItemID;

	UPROPERTY()
	bool FromPlayerSpawn;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export)
	UItemModifier* BaseItemModifier;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export)
	UItemModifier* ItemModifier1;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export)
	UItemModifier* ItemModifier2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool ShouldRegisterToOnSurvivorAdded;

protected:
	UPROPERTY(BlueprintReadWrite)
	bool BeingCollected;

	UPROPERTY(BlueprintReadWrite)
	bool BeingDropped;

	UPROPERTY(BlueprintReadWrite)
	bool _beingConsumedByEntity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _itemInteractor;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _mesh;

	UPROPERTY(EditDefaultsOnly)
	EInputInteractionType _displayedInputType;

	UPROPERTY(EditDefaultsOnly)
	bool _isKeyPromptForceDisabled;

	UPROPERTY(meta=(BindWidgetOptional))
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(EditDefaultsOnly)
	bool _isBoundToFirstCollector;

private:
	UPROPERTY(VisibleDefaultsOnly, Export)
	USceneComponent* _placementOrigin;

	UPROPERTY(ReplicatedUsing=OnRep_Collector, Transient)
	ADBDPlayer* _collector;

	UPROPERTY(Replicated, Transient)
	ADBDPlayer* _firstCollector;

	UPROPERTY(ReplicatedUsing=OnRep_State, Transient)
	ECollectableState _state;

	UPROPERTY(Transient, Export)
	TArray<UItemAddon*> _itemAddons;

	UPROPERTY(Transient, Export)
	TArray<UItemModifier*> _itemModifiers;

	UPROPERTY(Replicated, Transient)
	int32 _itemCount;

	UPROPERTY(EditDefaultsOnly)
	EAttachToSocketNameEnum _attachToSocketName;

	UPROPERTY(EditDefaultsOnly)
	EInventoryType _collectInInventoryType;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _stateTagForCollector;

	UPROPERTY(EditDefaultsOnly)
	ELoadoutItemType _itemType;

	UPROPERTY(EditDefaultsOnly)
	bool _discardWhenConsumed;

	UPROPERTY(EditDefaultsOnly)
	bool _disableAttachmentReplication;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _isInUse;

	UPROPERTY(EditAnywhere)
	bool _aimOnUse;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void SetVisibilityEvent(bool visibility);

public:
	UFUNCTION(BlueprintCallable)
	void SetItemInteractor(UInteractor* interactor);

	UFUNCTION()
	void SetIsKeyPromptForceDisabled(const bool isKeyPromptForceDisabled);

	UFUNCTION()
	void SetDisplayedInputType(const EInputInteractionType displayedInputType);

	UFUNCTION(BlueprintCallable)
	void SetCount(int32 count);

	UFUNCTION(Server, Reliable)
	void Server_Discard();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnUseReleased(ADBDPlayer* collector);

	UFUNCTION(BlueprintNativeEvent)
	void OnUse();

private:
	UFUNCTION()
	void OnRep_State();

	UFUNCTION()
	void OnRep_Collector(ADBDPlayer* oldCollector);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnPostItemAddonsCreation(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnDropped(ADBDPlayer* droppingPlayer);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnCustomizationChanged();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnCollectorSet(ADBDPlayer* collector);

private:
	UFUNCTION()
	void OnCollectorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnAddonsRemoved(const TArray<UItemAddon*>& addons);

	UFUNCTION(BlueprintImplementableEvent)
	void OnAddonsAdded(const TArray<UItemAddon*>& addons);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnActivateDissolveItem();

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UseReleased(ADBDPlayer* collector);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Use();

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoveItemAddon(UItemAddon* addon);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoveAllAddons();

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Dropped(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Collected(ADBDPlayer* collector);

public:
	UFUNCTION(BlueprintCallable)
	void Local_Dropped_Location(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation);

	UFUNCTION(BlueprintPure)
	bool IsStored() const;

	UFUNCTION(BlueprintNativeEvent)
	bool IsRechargeable() const;

	UFUNCTION(BlueprintPure)
	bool IsPickable() const;

	UFUNCTION(BlueprintPure)
	bool IsOnGround() const;

	UFUNCTION(BlueprintPure)
	bool IsLocallyControlled() const;

	UFUNCTION()
	bool IsKeyPromptForceDisabled() const;

	UFUNCTION(BlueprintPure)
	bool IsInSearchable() const;

	UFUNCTION(BlueprintPure)
	bool IsEquipped() const;

	UFUNCTION(BlueprintNativeEvent)
	bool IsCountDisplayForced() const;

	UFUNCTION(BlueprintPure)
	bool IsCollected() const;

	UFUNCTION(BlueprintPure)
	bool HasGameplayModifierFlag(FGameplayTag modifierFlag) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetUsePercentLeft() const;

	UFUNCTION(BlueprintPure)
	float GetModifierSum(FGameplayTag modifierType, float defaultValue) const;

	UFUNCTION(BlueprintPure)
	float GetModifierMax(FGameplayTag modifierType, float defaultValue) const;

	UFUNCTION(BlueprintPure)
	UInteractor* GetItemInteractor() const;

	UFUNCTION(BlueprintNativeEvent)
	uint8 GetItemIconIndex() const;

	UFUNCTION(BlueprintPure)
	TArray<UItemAddon*> GetItemAddons();

	UFUNCTION(BlueprintPure)
	FString GetIconFilePath() const;

	UFUNCTION()
	EInputInteractionType GetDisplayedInputType() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	int32 GetCount() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetCollector() const;

	UFUNCTION(BlueprintNativeEvent)
	void DebugPrintStats();

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanUse(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanBeDropped(const ADBDPlayer* dropper) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanBeCollected(const ADBDPlayer* collector) const;

	UFUNCTION(BlueprintCallable)
	void CallOnCollectorSetBP(FOnCollectorSetBPDelegate callback);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnSurvivorAdded(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_UseReleased();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Use();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveItemAddon(UItemAddon* addon);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnConsumed(bool forceDiscard);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Discard();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_AddItemAddon(UItemAddon* addon);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACollectable();
};

FORCEINLINE uint32 GetTypeHash(const ACollectable) { return 0; }
