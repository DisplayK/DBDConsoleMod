#pragma once

#include "CoreMinimal.h"
#include "EKillerAbilities.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_FindObject.generated.h"

class ADBDAIBTController;
class ASlasherPlayer;

UCLASS(Abstract)
class DBDBOTS_API UBTService_FindObject : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBObjectLocation;

protected:
	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY(Transient)
	ASlasherPlayer* _killer;

public:
	UBTService_FindObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject) { return 0; }
