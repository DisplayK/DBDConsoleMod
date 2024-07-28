#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "OnryoTVAutoPowerComponent.generated.h"

class UOnryoTVInitialCooldownStateComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONRYO_API UOnryoTVAutoPowerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UOnryoTVInitialCooldownStateComponent> _cooldownStateClass;

	UPROPERTY(EditAnywhere)
	bool _powerTVOnBeginPlay;

public:
	UOnryoTVAutoPowerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoTVAutoPowerComponent) { return 0; }
