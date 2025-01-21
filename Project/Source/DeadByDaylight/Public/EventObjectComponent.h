#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EventObjectComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventObjectComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FName _eventId;

public:
	UEventObjectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventObjectComponent) { return 0; }
