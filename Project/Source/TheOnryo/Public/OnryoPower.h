#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "OnryoPower.generated.h"

class AOnryoTelevision;
class UManifestationComponent;
class UCondemnedComponent;
class UOnryoTeleportTargeterComponent;
class UInteractionDefinition;

UCLASS()
class AOnryoPower : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCondemnedComponent> _condemnedComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UManifestationComponent> _manifestationComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<FStatusEffectSpawnData> _effects;

	UPROPERTY(Transient)
	FPlayerStatusEffectSpawnerHelper _effectSpawner;

	UPROPERTY(EditDefaultsOnly, Replicated, Export)
	UOnryoTeleportTargeterComponent* _televisionTargeter;

	UPROPERTY(Replicated, Transient, Export)
	UManifestationComponent* _manifestationComponent;

	UPROPERTY(Replicated, Transient)
	TArray<AOnryoTelevision*> _televisions;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AOnryoTelevision> _televisionClass;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _onryoPowerCooldownInteraction;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void PowerCooldownEnd_Cosmetic();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AOnryoPower();
};

FORCEINLINE uint32 GetTypeHash(const AOnryoPower) { return 0; }
