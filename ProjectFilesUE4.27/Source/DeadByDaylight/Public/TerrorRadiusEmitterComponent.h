#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TerrorRadiusEmitterComponent.generated.h"

class UTerrorRadiusReceiverComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTerrorRadiusEmitterComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _simulatedFixedDistance;

private:
	UPROPERTY(EditDefaultsOnly)
	bool _imitatesAudioOnly;

	UPROPERTY(EditDefaultsOnly)
	bool _generatesChaseMusic;

	UPROPERTY(EditDefaultsOnly)
	bool _active;

	UPROPERTY(EditDefaultsOnly)
	bool _isFakeTerrorRadius;

	UPROPERTY(EditDefaultsOnly)
	float _radius;

	UPROPERTY(Transient)
	TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversInTerrorRadiusMap;

	UPROPERTY(Transient)
	TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversPhysicallyInRadiusRangeMap;

public:
	UFUNCTION(BlueprintCallable)
	void SetTerrorRadius(float radius);

	UFUNCTION(BlueprintCallable)
	void SetSimulatedFixedDistance(float distance);

	UFUNCTION(BlueprintCallable)
	void SetIsFakeTerrorRadius(bool value);

	UFUNCTION(BlueprintCallable)
	void SetIsActive(bool active);

	UFUNCTION(BlueprintCallable)
	void SetImitatesAudioOnly(bool imitatesAudioOnly);

	UFUNCTION(BlueprintCallable)
	void SetGeneratesChaseMusic(bool generatesChaseMusic);

	UFUNCTION(BlueprintCallable)
	void RemoveEmitterFromList();

	UFUNCTION(BlueprintPure)
	bool IsInTerrorRadius(const UTerrorRadiusReceiverComponent* receiver) const;

	UFUNCTION(BlueprintPure)
	float GetSimulatedFixedDistance() const;

	UFUNCTION(BlueprintPure)
	float GetRadius() const;

	UFUNCTION(BlueprintPure)
	bool GetIsActive() const;

	UFUNCTION(BlueprintPure)
	bool GetImitatesAudioOnly() const;

	UFUNCTION(BlueprintPure)
	bool GetGeneratesChaseMusic() const;

public:
	UTerrorRadiusEmitterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusEmitterComponent) { return 0; }
