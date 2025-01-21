#pragma once

#include "CoreMinimal.h"
#include "EKillerAbilities.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "EPawnType.h"
#include "BTService_Find_Character.generated.h"

class ADBDAIBTController;

UCLASS()
class DBDBOTS_API UBTService_Find_Character : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EPawnType CharacterFilter;

	UPROPERTY(EditInstanceOnly)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBCharacterLocation;

protected:
	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

public:
	UBTService_Find_Character();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_Find_Character) { return 0; }
