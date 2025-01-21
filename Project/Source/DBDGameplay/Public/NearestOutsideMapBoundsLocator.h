#pragma once

#include "CoreMinimal.h"
#include "EEndGameReason.h"
#include "Components/ActorComponent.h"
#include "NearestOutsideMapBoundsLocator.generated.h"

class UAkComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UNearestOutsideMapBoundsLocator : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UAkComponent* _akComponent;

	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromBorderAllowed;

	UPROPERTY(EditDefaultsOnly)
	float _heightOfOOBPosition;

private:
	UFUNCTION()
	void OnGameEnd(EEndGameReason endGameReason);

	UFUNCTION()
	void OnGameBegin();

	UFUNCTION()
	void Client_InitializeAkLimitPointEvent();

public:
	UNearestOutsideMapBoundsLocator();
};

FORCEINLINE uint32 GetTypeHash(const UNearestOutsideMapBoundsLocator) { return 0; }
