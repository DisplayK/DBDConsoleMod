#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputLandscape.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscape : public UHoudiniInputActor
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FTransform CachedInputLandscapeTraqnsform;

public:
	UHoudiniInputLandscape();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputLandscape) { return 0; }
