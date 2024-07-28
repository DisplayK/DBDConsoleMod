#pragma once

#include "CoreMinimal.h"
#include "ProjectileProvider.h"
#include "UObject/NoExportTypes.h"
#include "AuthoritativePoolProjectileProviderAdapter.generated.h"

class UAuthoritativeActorPoolComponent;

UCLASS(BlueprintType)
class PROJECTILE_API UAuthoritativePoolProjectileProviderAdapter : public UObject, public IProjectileProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UAuthoritativeActorPoolComponent* _pool;

public:
	UFUNCTION(BlueprintCallable)
	void Init(UAuthoritativeActorPoolComponent* pool);

public:
	UAuthoritativePoolProjectileProviderAdapter();
};

FORCEINLINE uint32 GetTypeHash(const UAuthoritativePoolProjectileProviderAdapter) { return 0; }
