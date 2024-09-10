#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ExtConeCheck.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_ExtConeCheck : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBConeOrigin;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBConeDirection;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBWith;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ConeHalfAngle;

public:
	UBTDecorator_ExtConeCheck();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ExtConeCheck) { return 0; }
