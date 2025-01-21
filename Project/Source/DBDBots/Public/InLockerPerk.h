#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "InLockerPerk.generated.h"

class AActor;

USTRUCT()
struct FInLockerPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FDataTableDropdown PerkID;

	UPROPERTY(EditInstanceOnly)
	bool PerkNeedToBeFullyCharged;

	UPROPERTY(EditInstanceOnly)
	bool NeedToHoldItem;

	UPROPERTY(EditInstanceOnly)
	bool NeedToBeEmptyHanded;

	UPROPERTY(EditInstanceOnly)
	bool NeedToBeInjured;

	UPROPERTY(EditInstanceOnly)
	bool MustBeFarFromLinkedObject;

	UPROPERTY(EditInstanceOnly)
	float MinimumDistanceFromObject;

	UPROPERTY(EditInstanceOnly)
	TSubclassOf<AActor> LinkedObjectClass;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PerkWeight;

public:
	DBDBOTS_API FInLockerPerk();
};

FORCEINLINE uint32 GetTypeHash(const FInLockerPerk) { return 0; }
