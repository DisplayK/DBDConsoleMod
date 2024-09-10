#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniLandscapeEditLayer.generated.h"

class ALandscapeProxy;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeEditLayer : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;

	UPROPERTY()
	FString LayerName;

public:
	UHoudiniLandscapeEditLayer();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniLandscapeEditLayer) { return 0; }
