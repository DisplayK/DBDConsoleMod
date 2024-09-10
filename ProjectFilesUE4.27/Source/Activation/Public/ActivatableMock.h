#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Activatable.h"
#include "ActivatableMock.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ACTIVATION_API UActivatableMock : public UActorComponent, public IActivatable
{
	GENERATED_BODY()

public:
	UActivatableMock();
};

FORCEINLINE uint32 GetTypeHash(const UActivatableMock) { return 0; }
