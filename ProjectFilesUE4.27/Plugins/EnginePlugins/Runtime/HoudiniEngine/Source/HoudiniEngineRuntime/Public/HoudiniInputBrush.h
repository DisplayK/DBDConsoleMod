#pragma once

#include "CoreMinimal.h"
#include "Engine/Brush.h"
#include "HoudiniInputActor.h"
#include "HoudiniBrushInfo.h"
#include "HoudiniInputBrush.generated.h"

class UModel;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputBrush : public UHoudiniInputActor
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<FHoudiniBrushInfo> BrushesInfo;

	UPROPERTY(Transient, DuplicateTransient)
	UModel* CombinedModel;

	UPROPERTY()
	bool bIgnoreInputObject;

	UPROPERTY()
	TEnumAsByte<EBrushType> CachedInputBrushType;

public:
	UHoudiniInputBrush();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputBrush) { return 0; }
