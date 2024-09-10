#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StunnableInterface.h"
#include "OnStunned.h"
#include "TriggerDecoyVisibilityVFX.h"
#include "UObject/NoExportTypes.h"
#include "DecoySlasherComponent.generated.h"

class UTerrorRadiusEmitterComponent;
class ASlasherPlayer;
class URedStainComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDecoySlasherComponent : public UActorComponent, public IStunnableInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnStunned OnStunned;

	UPROPERTY(BlueprintAssignable)
	FTriggerDecoyVisibilityVFX TriggerDecoyVisibilityVFX;

protected:
	UPROPERTY(EditAnywhere)
	bool HasTerrorRadius;

	UPROPERTY(EditAnywhere)
	bool HasRedGlow;

private:
	UPROPERTY(Transient)
	bool _isActive;

	UPROPERTY(Transient)
	bool _initialized;

	UPROPERTY(Transient, Export)
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitter;

	UPROPERTY(Transient, Export)
	URedStainComponent* _redStainComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetDecoyIsActive(bool isActive, const FVector& location, const FRotator& rotation, bool visibleRedGlow);

private:
	UFUNCTION()
	void OnRealSlasherTerrorRadiusChanged(float newValue);

public:
	UFUNCTION(BlueprintPure)
	bool IsDecoyActive() const;

	UFUNCTION(BlueprintPure)
	UTerrorRadiusEmitterComponent* GetTerrorRadiusEmitter() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetRealSlasher() const;

	UFUNCTION(BlueprintCallable)
	void DoPostVFXUpdates(const FVector& location, const FRotator& rotation);

private:
	UFUNCTION()
	void CopyCustomizationFromSlasher();

public:
	UDecoySlasherComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDecoySlasherComponent) { return 0; }
