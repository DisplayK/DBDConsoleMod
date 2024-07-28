#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerMoveBackAndForthComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerMoveBackAndForthComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnMoveTimerDone();

public:
	UPlayerMoveBackAndForthComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerMoveBackAndForthComponent) { return 0; }
