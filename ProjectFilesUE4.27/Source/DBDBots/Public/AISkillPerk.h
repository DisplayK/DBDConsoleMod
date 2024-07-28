#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "AISkillPerk.generated.h"

class UAISkill;

USTRUCT(BlueprintType)
struct FAISkillPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FDataTableDropdown PerkID;

	UPROPERTY(EditDefaultsOnly, Export)
	UAISkill* Skill;

public:
	DBDBOTS_API FAISkillPerk();
};

FORCEINLINE uint32 GetTypeHash(const FAISkillPerk) { return 0; }
