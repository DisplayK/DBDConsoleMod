#pragma once

#include "CoreMinimal.h"
#include "BaseVFX.h"
#include "ItemVfx.generated.h"

class UParticleSystemComponent;
class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API AItemVfx : public ABaseVFX
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UParticleSystemComponent*> _particleSystems;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnAttackEnd();

	UFUNCTION(BlueprintImplementableEvent)
	void OnAttackBegin();

	UFUNCTION(BlueprintCallable)
	void ClearParticleSystems();

	UFUNCTION(BlueprintImplementableEvent)
	void AttachToSkeletalMesh(USkeletalMeshComponent* SkeletonPart);

protected:
	UFUNCTION(BlueprintCallable)
	void AddParticleSystemComponent(UParticleSystemComponent* particleSystemComponent);

public:
	AItemVfx();
};

FORCEINLINE uint32 GetTypeHash(const AItemVfx) { return 0; }
