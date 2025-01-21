#pragma once

#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "SceneComponentPointProvider.generated.h"

class USceneComponent;

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API USceneComponentPointProvider : public UPointsProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FComponentReference _sceneReference;

	UPROPERTY(Transient, Export)
	USceneComponent* _sceneComponent;

public:
	USceneComponentPointProvider();
};

FORCEINLINE uint32 GetTypeHash(const USceneComponentPointProvider) { return 0; }
