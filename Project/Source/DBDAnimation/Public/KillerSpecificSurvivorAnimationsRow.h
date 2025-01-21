#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "KillerSpecificSurvivorAnimationsRow.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FKillerSpecificSurvivorAnimationsRow: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag KillerPresenceStateTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UAnimInstance> KillerSpecificSurvivorAnimation;

public:
	DBDANIMATION_API FKillerSpecificSurvivorAnimationsRow();
};

FORCEINLINE uint32 GetTypeHash(const FKillerSpecificSurvivorAnimationsRow) { return 0; }
