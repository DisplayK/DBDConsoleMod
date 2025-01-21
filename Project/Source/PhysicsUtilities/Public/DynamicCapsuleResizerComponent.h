#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "DynamicCapsuleResizerComponent.generated.h"

class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class PHYSICSUTILITIES_API UDynamicCapsuleResizerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCapsuleComponent* _capsule;

	UPROPERTY(EditAnywhere)
	float _shrinkPercent;

	UPROPERTY(EditAnywhere)
	float _shrinkDuration;

	UPROPERTY(EditAnywhere)
	float _expandDuration;

	UPROPERTY(EditAnywhere)
	float _stayShrunkenDuration;

	UPROPERTY(EditAnywhere)
	float _expandOverlapTestMinDeltaTime;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isShrinkingEnabled;

	UPROPERTY(ReplicatedUsing=OnRep_IsShrinkingAlwaysEnabled, Transient)
	bool _isShrinkingAlwaysEnabled;

public:
	UFUNCTION(BlueprintCallable)
	void SetShrinkingEnabled(bool enabled);

private:
	UFUNCTION()
	void OnRep_IsShrinkingAlwaysEnabled();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDynamicCapsuleResizerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDynamicCapsuleResizerComponent) { return 0; }
