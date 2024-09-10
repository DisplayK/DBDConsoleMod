#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AISkill_Find.generated.h"

class AActor;
class UObject;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Find : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> FindClass;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag BlackboardWishListTag;

	UPROPERTY(EditDefaultsOnly)
	float SearchInterval;

	UPROPERTY(EditDefaultsOnly)
	bool MustBeSeen;

protected:
	UPROPERTY(Transient)
	TArray<UObject*> _currentWishedObjects;

public:
	UAISkill_Find();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Find) { return 0; }
