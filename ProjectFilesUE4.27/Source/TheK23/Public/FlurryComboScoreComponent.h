#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "FlurryComboScoreComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFlurryComboScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ComboScore)
	float _comboScore;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeForCombo;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _baseKnifeComboScore;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumKnifeMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _fillLacerationComboScore;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _longRangeThreshold;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _closeRangeScoreMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _longRangeScoreMultiplier;

	UPROPERTY(EditDefaultsOnly)
	TArray<float> _thresholds;

	UPROPERTY(EditDefaultsOnly)
	TArray<float> _thresholdsScoreForAudio;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _comboScoreEvents;

private:
	UFUNCTION()
	void OnRep_ComboScore() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlurryComboScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlurryComboScoreComponent) { return 0; }
