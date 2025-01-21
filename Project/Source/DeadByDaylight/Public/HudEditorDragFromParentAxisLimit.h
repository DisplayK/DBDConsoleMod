#pragma once

#include "CoreMinimal.h"
#include "EHudEditorDragAxisOption.h"
#include "HudEditorDragFromParentAxisLimit.generated.h"

USTRUCT(BlueprintType)
struct FHudEditorDragFromParentAxisLimit
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool Enable;

	UPROPERTY(EditAnywhere)
	EHudEditorDragAxisOption AxisOption;

	UPROPERTY(EditAnywhere)
	float MinDragDistance;

	UPROPERTY(EditAnywhere)
	bool ScaleMinDragDistanceWithParent;

	UPROPERTY(EditAnywhere)
	float MaxDragDistance;

	UPROPERTY(EditAnywhere)
	bool ScaleMaxDragDistanceWithParent;

public:
	DEADBYDAYLIGHT_API FHudEditorDragFromParentAxisLimit();
};

FORCEINLINE uint32 GetTypeHash(const FHudEditorDragFromParentAxisLimit) { return 0; }
