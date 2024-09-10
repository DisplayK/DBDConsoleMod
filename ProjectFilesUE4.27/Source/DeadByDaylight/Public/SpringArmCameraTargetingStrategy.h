#pragma once

#include "CoreMinimal.h"
#include "BaseCameraTargetingStrategy.h"
#include "SpringArmCameraTargetingStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USpringArmCameraTargetingStrategy : public UBaseCameraTargetingStrategy
{
	GENERATED_BODY()

public:
	USpringArmCameraTargetingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USpringArmCameraTargetingStrategy) { return 0; }
