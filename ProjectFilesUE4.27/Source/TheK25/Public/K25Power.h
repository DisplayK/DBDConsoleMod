#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "CustomKillerInstinctData.h"
#include "Templates/SubclassOf.h"
#include "K25Power.generated.h"

class AK25Gateway;
class UAuthoritativePoolProjectileProviderAdapter;
class ALamentConfiguration;
class ASlasherPlayer;
class ACamperPlayer;
class UChargeableComponent;
class AK25ControlledProjectile;
class AAnimationFollowerActor;
class AK25Husk;
class UK25SurvivorChainAttachmentComponent;
class UK25SurvivorChainTargetterComponent;
class UK25KillerTeleportationPositionFinderComponent;
class UDataTable;
class UK25ProjectileLauncher;
class UAuthoritativeActorPoolComponent;
class UK25ChainAttachmentReplicationComponent;
class UPowerChargeComponent;
class UK25PowerChargePresentationItemProgressComponent;

UCLASS()
class AK25Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _k25ChainStrikeInteractionChargeableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _k25TeleportChargeableComponent;

	UPROPERTY(EditDefaultsOnly)
	TArray<FCustomKillerInstinctData> _customKillerInstinctDatas;

	UPROPERTY(EditDefaultsOnly)
	TArray<FName> _survivorStatusEffectID;

	UPROPERTY(EditDefaultsOnly)
	TArray<FName> _killerStatusEffectID;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK25SurvivorChainAttachmentComponent> _survivorChainAttachmentComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK25SurvivorChainTargetterComponent> _survivorChainTargetterComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK25Gateway> _k25GatewayClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK25ControlledProjectile> _controlledProjectileClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ALamentConfiguration> _lamentConfigurationClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK25Husk> _k25HuskClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK25KillerTeleportationPositionFinderComponent> _killerTeleportFinderComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAnimationFollowerActor> _chainAnimationActorClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<UDataTable*> _chainAnimationMappingsTables;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAnimationFollowerActor> _pillarAnimationActorClass;

private:
	UPROPERTY(VisibleAnywhere, Export)
	UK25ProjectileLauncher* _k25ProjectileLauncher;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _k25ProjectilePool;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _k25ChainPool;

	UPROPERTY(VisibleAnywhere, Export)
	UPowerChargeComponent* _k25PowerChargeComponent;

	UPROPERTY()
	UAuthoritativePoolProjectileProviderAdapter* _k25ProjectileProvider;

	UPROPERTY(VisibleAnywhere, Export)
	UK25PowerChargePresentationItemProgressComponent* _k25PowerPresentationItemProgressComponent;

	UPROPERTY(ReplicatedUsing=OnRep_K25Gateway, Transient)
	AK25Gateway* _gateway;

	UPROPERTY(ReplicatedUsing=OnRep_K25ControlledProjectile, Transient)
	AK25ControlledProjectile* _controlledProjectileInstance;

	UPROPERTY(ReplicatedUsing=OnRep_LamentConfiguration, Transient)
	ALamentConfiguration* _lamentConfiguration;

	UPROPERTY(Transient)
	AK25Husk* _k25Husk;

	UPROPERTY(VisibleAnywhere, Export)
	UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent;

	UPROPERTY(Replicated)
	bool _isPowerCharged;

private:
	UFUNCTION()
	void OnSurvivorAdded(ACamperPlayer* survivor, ASlasherPlayer* killer);

	UFUNCTION()
	void OnRep_LamentConfiguration();

	UFUNCTION()
	void OnRep_K25Gateway();

	UFUNCTION()
	void OnRep_K25ControlledProjectile();

	UFUNCTION()
	void OnKillerAdded(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerInterruptSFX(ASlasherPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerInterruptOpenHatchSFX(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25Power();
};

FORCEINLINE uint32 GetTypeHash(const AK25Power) { return 0; }
