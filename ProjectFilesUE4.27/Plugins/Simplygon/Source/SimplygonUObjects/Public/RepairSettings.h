#pragma once

#include "CoreMinimal.h"
#include "RepairSettings.generated.h"

USTRUCT(BlueprintType)
struct FRepairSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseTJunctionRemover : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TJuncDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeldDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 WeldOnlyBorderVertices : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 WeldOnlyWithinMaterial : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 WeldOnlyWithinSceneNode : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 WeldOnlyBetweenSceneNodes : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseWelding : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProgressivePasses;

public:
	SIMPLYGONUOBJECTS_API FRepairSettings();
};

FORCEINLINE uint32 GetTypeHash(const FRepairSettings) { return 0; }
