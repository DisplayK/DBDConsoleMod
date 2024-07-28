#pragma once

#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "TwinCharacterMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinCharacterMovementComponent : public UDBDCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UTwinCharacterMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinCharacterMovementComponent) { return 0; }
