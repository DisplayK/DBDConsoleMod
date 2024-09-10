#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SkillCheckViewData.generated.h"

USTRUCT(BlueprintType)
struct FSkillCheckViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FKey InputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FKey InputKey2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float HitAreaStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float HitAreaLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float BonusAreaStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float BonusAreaLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHexed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSpectating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsReversed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsMirrored;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInsane;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsContinuousSkillCheck;

public:
	DBDUIVIEWINTERFACES_API FSkillCheckViewData();
};

FORCEINLINE uint32 GetTypeHash(const FSkillCheckViewData) { return 0; }
