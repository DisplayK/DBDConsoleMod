#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "AICleansePerkCondition.h"
#include "BTService_FindInteractor_Totem.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Totem : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FAITunableParameter InactiveGoalWeightMaxDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter InactiveGoalWeightAtMinDistance;

	UPROPERTY(EditInstanceOnly)
	TArray<FAICleansePerkCondition> CleansePerks;

	UPROPERTY(EditInstanceOnly)
	bool SearchUsingBoundPerks;

	UPROPERTY(EditInstanceOnly)
	TArray<FName> BoundPerkIds;

	UPROPERTY(EditInstanceOnly)
	bool OnlyWhenInjured;

public:
	UBTService_FindInteractor_Totem();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Totem) { return 0; }
