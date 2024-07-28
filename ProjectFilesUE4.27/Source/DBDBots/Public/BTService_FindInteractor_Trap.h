#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "AIRoll.h"
#include "BTService_FindInteractor_Trap.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Trap : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FAITunableParameter HelpDestroyDemoPortal;

	UPROPERTY(EditDefaultsOnly)
	FAIRoll SeeStandardTrapRoll;

	UPROPERTY(EditDefaultsOnly)
	float TrapGroundLocationOffset;

public:
	UBTService_FindInteractor_Trap();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Trap) { return 0; }
