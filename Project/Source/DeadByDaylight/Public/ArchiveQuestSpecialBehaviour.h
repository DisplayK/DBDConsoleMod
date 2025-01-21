#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EAdditiveBehaviour.h"
#include "EContextualType.h"
#include "EOwnershipBehaviour.h"
#include "EStackingBehaviours.h"
#include "ArchiveQuestSpecialBehaviour.generated.h"

USTRUCT(BlueprintType)
struct FArchiveQuestSpecialBehaviour: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EContextualType Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName SpawnObjectId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAdditiveBehaviour AdditiveBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EStackingBehaviours StackableBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EOwnershipBehaviour OwnershipBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 SpawnQuantity;

public:
	DEADBYDAYLIGHT_API FArchiveQuestSpecialBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveQuestSpecialBehaviour) { return 0; }
