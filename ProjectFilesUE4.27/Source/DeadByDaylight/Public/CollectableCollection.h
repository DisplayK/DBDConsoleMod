#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollectableCollection.generated.h"

class ACollectable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCollectableCollection : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ACollectable*> _collectables;

public:
	UCollectableCollection();
};

FORCEINLINE uint32 GetTypeHash(const UCollectableCollection) { return 0; }
