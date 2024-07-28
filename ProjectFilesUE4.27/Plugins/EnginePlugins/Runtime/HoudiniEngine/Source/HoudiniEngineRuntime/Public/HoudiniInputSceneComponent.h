#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputSceneComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSceneComponent : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FTransform ActorTransform;

public:
	UHoudiniInputSceneComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputSceneComponent) { return 0; }
