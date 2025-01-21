#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableCamperFilter.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Camper.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Camper : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EFindInteractableCamperFilter StatusFilter;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter AllyDangerStateGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter IncapacitatedAlliesGoalWeight;

public:
	UBTService_FindInteractor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Camper) { return 0; }
