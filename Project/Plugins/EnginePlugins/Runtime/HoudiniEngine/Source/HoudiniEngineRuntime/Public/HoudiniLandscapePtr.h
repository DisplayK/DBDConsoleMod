#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniLandscapeOutputBakeType.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniLandscapePtr.generated.h"

class ALandscapeProxy;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapePtr : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;

	UPROPERTY()
	EHoudiniLandscapeOutputBakeType BakeType;

public:
	UHoudiniLandscapePtr();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniLandscapePtr) { return 0; }
