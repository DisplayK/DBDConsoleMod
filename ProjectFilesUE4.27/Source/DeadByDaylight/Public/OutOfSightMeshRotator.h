#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OutOfSightMeshRotator.generated.h"

class ADBDPlayer;
class UMeshComponent;

UCLASS(BlueprintType, Transient, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOutOfSightMeshRotator : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _maxDistance;

	UPROPERTY(EditDefaultsOnly)
	float _dotProductThreshold;

private:
	UPROPERTY(Transient)
	ADBDPlayer* _locallyObservedPlayer;

	UPROPERTY(Transient, Export)
	TArray<UMeshComponent*> _meshesToRotate;

	UPROPERTY(EditDefaultsOnly)
	float _rotationOffset;

protected:
	UFUNCTION(BlueprintCallable)
	void SetMeshesToRotate(TArray<UMeshComponent*> meshesToRotate);

public:
	UOutOfSightMeshRotator();
};

FORCEINLINE uint32 GetTypeHash(const UOutOfSightMeshRotator) { return 0; }
