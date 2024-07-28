#pragma once

#include "CoreMinimal.h"
#include "EPlayerStatus.h"
#include "EObsessionUIState.h"
#include "EConnectionQuality.h"
#include "PlayerStatusViewData.generated.h"

class UTexture2D;
class UKillerStatusData;

USTRUCT(BlueprintType)
struct FPlayerStatusViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UTexture2D* PlayerPortraitIcon;

	UPROPERTY(BlueprintReadOnly, Transient)
	UTexture2D* PlayerPortraitIconOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerStatus PlayerStatusState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimerProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDeepWound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBroken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLocalPlayerAKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EObsessionUIState ObsessionState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DrainStage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConnectionQuality ConnectionQualityStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UKillerStatusData* KillerStatusData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CampProgress;

public:
	DBDUIVIEWINTERFACES_API FPlayerStatusViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusViewData) { return 0; }
