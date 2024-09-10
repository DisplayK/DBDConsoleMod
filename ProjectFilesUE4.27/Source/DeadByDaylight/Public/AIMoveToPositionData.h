#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AIMoveToPositionData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UAIMoveToPositionData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* _positionActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterMovementTypes _movementType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _usePathfinding;

public:
	UFUNCTION(BlueprintCallable)
	void Init(AActor* positionActor, ECharacterMovementTypes movementType, bool usePathfinding);

public:
	UAIMoveToPositionData();
};

FORCEINLINE uint32 GetTypeHash(const UAIMoveToPositionData) { return 0; }
