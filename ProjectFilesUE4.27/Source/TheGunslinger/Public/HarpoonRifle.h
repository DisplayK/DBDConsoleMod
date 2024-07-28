#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "HarpoonRifle.generated.h"

class UChainLinkableComponent;
class UHarpoonChainPositioner;
class URiflePlayerLinker;
class ARifleChain;
class UHarpoonProviderComponent;
class UChargeableComponent;
class UHarpoonLauncher;
class UTriggerableActivatorComponent;
class URifleChainTensionComponent;
class UFireHarpoonRifleInteraction;

UCLASS()
class THEGUNSLINGER_API AHarpoonRifle : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UChainLinkableComponent> _survivorLinkableClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UChainLinkableComponent> _killerLinkableClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ARifleChain> _chainClass;

	UPROPERTY(EditAnywhere)
	FName _rifleMuzzleSocket;

	UPROPERTY(EditAnywhere)
	FName _rifleHarpoonLoadingSocket;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _crowActiveRange;

	UPROPERTY(VisibleAnywhere, Export)
	UHarpoonLauncher* _launcher;

	UPROPERTY(VisibleAnywhere, Export)
	UHarpoonProviderComponent* _harpoonProvider;

	UPROPERTY(Transient)
	ARifleChain* _chain;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	URifleChainTensionComponent* _chainTensionComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UChargeableComponent* _chainTensionChargeable;

	UPROPERTY(VisibleAnywhere, Export)
	URiflePlayerLinker* _playerLinker;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHarpoonChainPositioner* _harpoonChainPositioner;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFireHarpoonRifleInteraction* _fireInteraction;

	UPROPERTY(VisibleAnywhere, Export)
	UTriggerableActivatorComponent* _crowsActivatorComponent;

public:
	UFUNCTION(BlueprintPure)
	ARifleChain* GetChain() const;

private:
	UFUNCTION()
	void Authority_OnFireHarpoon();

public:
	AHarpoonRifle();
};

FORCEINLINE uint32 GetTypeHash(const AHarpoonRifle) { return 0; }
