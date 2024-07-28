#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAttackEventType.h"
#include "GameplayTagContainer.h"
#include "AttackEventTypeDetails.generated.h"

USTRUCT(BlueprintType)
struct FAttackEventTypeDetails: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag GameplayTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackEventType AttackEventType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeProtective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssociatedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

public:
	DEADBYDAYLIGHT_API FAttackEventTypeDetails();
};

FORCEINLINE uint32 GetTypeHash(const FAttackEventTypeDetails) { return 0; }
