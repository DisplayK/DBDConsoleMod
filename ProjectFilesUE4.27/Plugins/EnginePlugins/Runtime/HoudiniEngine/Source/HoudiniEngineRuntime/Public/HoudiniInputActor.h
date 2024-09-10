#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniInputActor.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputActor : public UHoudiniInputObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<UHoudiniInputSceneComponent*> ActorComponents;

	UPROPERTY()
	TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;

	UPROPERTY()
	int32 LastUpdateNumComponentsAdded;

	UPROPERTY()
	int32 LastUpdateNumComponentsRemoved;

public:
	UHoudiniInputActor();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputActor) { return 0; }
