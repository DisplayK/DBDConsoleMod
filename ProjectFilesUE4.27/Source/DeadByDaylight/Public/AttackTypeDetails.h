#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAttackType.h"
#include "AttackTypeDetails.generated.h"

USTRUCT(BlueprintType)
struct FAttackTypeDetails: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackType AttackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBasicAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssociatedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

public:
	DEADBYDAYLIGHT_API FAttackTypeDetails();
};

FORCEINLINE uint32 GetTypeHash(const FAttackTypeDetails) { return 0; }
