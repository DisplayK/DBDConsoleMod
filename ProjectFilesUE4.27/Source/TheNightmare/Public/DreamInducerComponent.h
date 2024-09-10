#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DreamInducerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDreamInducerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActorComponent> _generatorDreamworldClass;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UDreamInducerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDreamInducerComponent) { return 0; }
