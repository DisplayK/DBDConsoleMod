#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoudiniAssetActor.generated.h"

class UHoudiniAssetComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API AHoudiniAssetActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export)
	UHoudiniAssetComponent* HoudiniAssetComponent;

public:
	AHoudiniAssetActor();
};

FORCEINLINE uint32 GetTypeHash(const AHoudiniAssetActor) { return 0; }
