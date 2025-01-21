#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConspicuousActionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UConspicuousActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UConspicuousActionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UConspicuousActionComponent) { return 0; }
