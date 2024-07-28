#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "NativeBlockIndicatorData.h"
#include "VaultData.h"
#include "Window.generated.h"

class UPrimitiveComponent;
class UBlockableComponent;
class UAkAudioEvent;
class ULocalPlayerTrackerComponent;
class UInteractionDefinition;
class UDBDNavEvadeLoopComponent;
class UMaterialHelper;
class UChildActorComponent;
class UAkComponent;
class ACamperPlayer;
class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AWindow : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FNativeBlockIndicatorData NativeSmokeOtherIndicatorData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FNativeBlockIndicatorData NativeEntityIndicatorData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FNativeBlockIndicatorData NativeSmokeSelfIndicatorData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _windowCollider;

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_blockedByLevel)
	bool _isBlockedByLevel;

private:
	UPROPERTY(Transient, Export)
	UChildActorComponent* _entityAssets;

	UPROPERTY(Transient, Export)
	UMaterialHelper* _materialHelper;

	UPROPERTY(Transient, Export)
	UAkComponent* _akAudioWindow;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* akAudioEventWindowsBlocStart;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* akAudioEventWindowsBlocStop;

	UPROPERTY(Transient)
	TMap<ACamperPlayer*, FVaultData> _survivorVaultData;

	UPROPERTY(Transient, Export)
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(Transient, Export)
	UBlockableComponent* _blockableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavEvadeLoopComponent* _navEvadeLoopComponent;

private:
	UFUNCTION()
	void OnRep_blockedByLevel();

	UFUNCTION()
	void OnLocallyObservedChanged();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction);

public:
	UFUNCTION(BlueprintCallable)
	void NotifyOnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction);

	UFUNCTION(BlueprintPure)
	bool IsWindowVaultBlockedForAnyPlayer() const;

	UFUNCTION(BlueprintPure)
	bool IsWindowVaultBlockedFor(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UMaterialHelper* GetMaterialHelper() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UChildActorComponent* GetEntityAssets() const;

public:
	UFUNCTION(BlueprintPure)
	bool GetBlockedByLevel() const;

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UAkComponent* GetAudioComponent() const;

public:
	UFUNCTION(BlueprintCallable)
	void ForceBlockLocalWindowInteraction(bool blockInteraction);

	UFUNCTION(BlueprintCallable)
	void Authority_SetBlockedByLevel(bool isBlockedByLevel);

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnVaultInternal(ADBDPlayer* player, bool canBlockVault);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AWindow();
};

FORCEINLINE uint32 GetTypeHash(const AWindow) { return 0; }
