#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ECamperImmobilizeState.h"
#include "ECamperDamageState.h"
#include "EIsCamperStateOnFilter.h"
#include "BTDecorator_IsCamperState.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsCamperState : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBCamper;

	UPROPERTY(EditInstanceOnly)
	ECamperDamageState DamageState;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> DamageOp;

	UPROPERTY(EditInstanceOnly)
	ECamperImmobilizeState ImmobilizeState;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> ImmobilizeOp;

	UPROPERTY(EditInstanceOnly)
	EIsCamperStateOnFilter OnFilter;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> OnOthersFilterOp;

	UPROPERTY(EditInstanceOnly)
	int32 NbOnOthersCampers;

public:
	UBTDecorator_IsCamperState();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsCamperState) { return 0; }
