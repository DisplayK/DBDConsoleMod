#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "Templates/SubclassOf.h"
#include "AISkill_InteractionSetTrap.generated.h"

class AActor;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionSetTrap : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> TrapClass;

	UPROPERTY(EditDefaultsOnly)
	float MaxDistanceFromPointOfInterest;

	UPROPERTY(EditDefaultsOnly)
	float MaxDistanceFromAnotherSetTrap;

public:
	UAISkill_InteractionSetTrap();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionSetTrap) { return 0; }
