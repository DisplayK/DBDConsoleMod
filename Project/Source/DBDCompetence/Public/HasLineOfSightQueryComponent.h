#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HasLineOfSightQueryComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHasLineOfSightQueryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHasLineOfSightQueryComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHasLineOfSightQueryComponent) { return 0; }
