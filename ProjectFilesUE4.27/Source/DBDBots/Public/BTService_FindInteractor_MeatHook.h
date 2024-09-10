#pragma once

#include "CoreMinimal.h"
#include "EFindInteractableMeatHookStatus.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_MeatHook.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_MeatHook : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EFindInteractableMeatHookStatus StatusFilter;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter AllyDangerStateGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BotDangerStateGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BotInjuredStateGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter HumanAllyHookedGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter MaxHookTimeGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter IncapacitatedAlliesGoalWeight;

public:
	UBTService_FindInteractor_MeatHook();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_MeatHook) { return 0; }
