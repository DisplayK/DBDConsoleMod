#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDPlayerAudioHandlerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPlayerAudioHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FString _stopMovingRTPC;

public:
	UDBDPlayerAudioHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPlayerAudioHandlerComponent) { return 0; }
