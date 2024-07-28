#pragma once

#include "CoreMinimal.h"
#include "ProjectileProvider.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SingleProjectileProviderComponent.generated.h"

class ABaseProjectile;

UCLASS(meta=(BlueprintSpawnableComponent))
class PROJECTILE_API USingleProjectileProviderComponent : public UActorComponent, public IProjectileProvider
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABaseProjectile> _projectileClass;

	UPROPERTY(ReplicatedUsing=OnRep_Projectile, Transient)
	ABaseProjectile* _projectile;

private:
	UFUNCTION()
	void OnRep_Projectile();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USingleProjectileProviderComponent();
};

FORCEINLINE uint32 GetTypeHash(const USingleProjectileProviderComponent) { return 0; }
