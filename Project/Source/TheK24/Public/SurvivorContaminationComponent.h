#pragma once

#include "CoreMinimal.h"
#include "TagStateBool.h"
#include "SurvivorStatusInterface.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "EContaminator.h"
#include "SurvivorContaminationComponent.generated.h"

class UStatusEffect;
class UChargeableComponent;
class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK24_API USurvivorContaminationComponent : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsContaminated)
	FTagStateBool _isContaminated;

	UPROPERTY(Replicated, Transient, Export)
	UChargeableComponent* _injectSerumChargeable;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _injectSerumSecondsToCharge;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatusEffect> _hinderedEffect;

	UPROPERTY(EditAnywhere)
	FTunableStat _contaminationHinderedSeconds;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _contaminationHinderedValue;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UInteractionDefinition>> _injectSerumInteractionsClasses;

	UPROPERTY(ReplicatedUsing=OnRep_InjectSerumInteractions, Transient, Export)
	TArray<UInteractionDefinition*> _injectSerumInteractions;

private:
	UFUNCTION()
	void OnRep_IsContaminated();

	UFUNCTION()
	void OnRep_InjectSerumInteractions();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnContaminationCured_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnContaminated_SFX_Stinger_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnContaminated_Cosmetic(EContaminator contaminator);

private:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnContaminated_Cosmetic(EContaminator contaminator);

public:
	UFUNCTION(BlueprintPure)
	bool IsContaminated() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorContaminationComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorContaminationComponent) { return 0; }
