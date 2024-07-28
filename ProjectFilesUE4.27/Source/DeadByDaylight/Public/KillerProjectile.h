#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhysicsBasedProjectile.h"
#include "EHitValidatorConfigName.h"
#include "KillerProjectile.generated.h"

class UPrimitiveComponent;
class UHitValidatorComponent;
class UHitValidatorConfigurator;
class ASlasherPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AKillerProjectile : public APhysicsBasedProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag _killerProjectileAttemptGameEventTag;

private:
	UPROPERTY(VisibleAnywhere, Export)
	UHitValidatorConfigurator* _hitValidatorConfigurator;

	UPROPERTY(VisibleAnywhere, Export)
	UHitValidatorComponent* _hitValidatorComponent;

	UPROPERTY(EditAnywhere)
	EHitValidatorConfigName _hitValidationConfigName;

public:
	UFUNCTION(BlueprintCallable)
	void SetActiveSlashable(bool active);

protected:
	UFUNCTION(BlueprintNativeEvent)
	UPrimitiveComponent* GetPlayerPrimitiveComponent() const;

public:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetLaunchingKiller() const;

public:
	AKillerProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AKillerProjectile) { return 0; }
