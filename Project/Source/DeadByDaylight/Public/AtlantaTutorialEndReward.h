#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaTutorialEndReward.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaTutorialEndReward: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodpointReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AuricCellsRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FearTokensReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> CharactersRewards;

public:
	DEADBYDAYLIGHT_API FAtlantaTutorialEndReward();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaTutorialEndReward) { return 0; }
