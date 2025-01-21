#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ExtIsAtLocation.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_ExtIsAtLocation : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBLoc;

	UPROPERTY(EditInstanceOnly)
	bool UseAlternativeLoc;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter AcceptableRadius;

public:
	UBTDecorator_ExtIsAtLocation();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ExtIsAtLocation) { return 0; }
