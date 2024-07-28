#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "ActorVariationElements.h"
#include "ActorVariationSpawner.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorVariationSpawner : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<AActor> Visualization;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FActorVariationElements> Variations;

private:
	UPROPERTY(Transient)
	UClass* _toSpawn;

public:
	UActorVariationSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UActorVariationSpawner) { return 0; }
