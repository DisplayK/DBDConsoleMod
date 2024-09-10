#pragma once

#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "MultiSceneComponentPointProvider.generated.h"

class USceneComponent;

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UMultiSceneComponentPointProvider : public UPointsProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FComponentReference> _sceneReferences;

	UPROPERTY(Transient, Export)
	TArray<USceneComponent*> _sceneComponents;

public:
	UMultiSceneComponentPointProvider();
};

FORCEINLINE uint32 GetTypeHash(const UMultiSceneComponentPointProvider) { return 0; }
