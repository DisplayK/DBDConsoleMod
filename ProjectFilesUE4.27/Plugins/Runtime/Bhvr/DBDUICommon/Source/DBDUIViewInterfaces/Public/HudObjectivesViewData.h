#pragma once

#include "CoreMinimal.h"
#include "EPlayerTeam.h"
#include "HudObjectivesViewData.generated.h"

USTRUCT(BlueprintType)
struct FHudObjectivesViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerTeam playerTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isHatchOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 nbGeneratorsLeft;

public:
	DBDUIVIEWINTERFACES_API FHudObjectivesViewData();
};

FORCEINLINE uint32 GetTypeHash(const FHudObjectivesViewData) { return 0; }
