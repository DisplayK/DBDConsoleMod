#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ComponentSweepInfo.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DBDProjectileMovementComponent.generated.h"

class USceneComponent;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UDBDProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnComponentToSweepCollisionBP, UPrimitiveComponent*, primitiveComponent, const FHitResult&, hitResult);

public:
	UPROPERTY(BlueprintAssignable)
	FOnComponentToSweepCollisionBP OnComponentToSweepCollisionBP;

private:
	UPROPERTY(Transient)
	TArray<FComponentSweepInfo> _componentsToSweep;

	UPROPERTY(Transient)
	FVector _previousPosition;

	UPROPERTY(Transient, Export)
	USceneComponent* _cachedUpdatedComponent;

	UPROPERTY(Transient)
	FVector _initialLocation;

	UPROPERTY(Transient)
	float _distanceTravelled;

	UPROPERTY(Transient)
	bool _hasMaximumDistance;

	UPROPERTY(Transient)
	float _maximumTravelDistance;

public:
	UFUNCTION(BlueprintPure)
	FVector GetPreviousLocation() const;

	UFUNCTION(BlueprintCallable)
	void AddComponentToSweep(UPrimitiveComponent* component);

public:
	UDBDProjectileMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDProjectileMovementComponent) { return 0; }
