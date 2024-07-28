#pragma once

#include "CoreMinimal.h"
#include "EBoneReductionTargetStopCondition.h"
#include "BoneSettings.generated.h"

USTRUCT(BlueprintType)
struct FBoneSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseBoneReducer : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 BoneReductionTargetBoneRatioEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 RemoveUnusedBones : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 LimitBonesPerVertex : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 BoneReductionTargetBoneCountEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 BoneReductionTargetMaxDeviationEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxBonePerVertex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 BoneReductionTargetOnScreenSizeEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBoneReductionTargetStopCondition BoneReductionTargetStopCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BoneReductionTargetBoneRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BoneReductionTargetBoneCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BoneReductionTargetMaxDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BoneReductionTargetOnScreenSize;

	UPROPERTY()
	int32 LockBoneSelectionSetID;

	UPROPERTY()
	FString LockBoneSelectionSetName;

	UPROPERTY()
	int32 RemoveBoneSelectionSetID;

	UPROPERTY()
	FString RemoveBoneSelectionSetName;

public:
	SIMPLYGONUOBJECTS_API FBoneSettings();
};

FORCEINLINE uint32 GetTypeHash(const FBoneSettings) { return 0; }
