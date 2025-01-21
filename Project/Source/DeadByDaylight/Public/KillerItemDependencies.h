#pragma once

#include "CoreMinimal.h"
#include "EKillerAbilities.h"
#include "KillerItemProperty.h"
#include "KillerItemDependencies.generated.h"

USTRUCT(BlueprintType)
struct FKillerItemDependencies
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FKillerItemProperty> Items;

public:
	DEADBYDAYLIGHT_API FKillerItemDependencies();
};

FORCEINLINE uint32 GetTypeHash(const FKillerItemDependencies) { return 0; }
