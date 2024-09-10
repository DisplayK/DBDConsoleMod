#pragma once

#include "CoreMinimal.h"
#include "TestInterface.h"
#include "Components/ActorComponent.h"
#include "TestActorComponentImplementingTestInterface.generated.h"

UCLASS(NotPlaceable, meta=(BlueprintSpawnableComponent))
class UNITTESTUTILITIES_API UTestActorComponentImplementingTestInterface : public UActorComponent, public ITestInterface
{
	GENERATED_BODY()

public:
	UTestActorComponentImplementingTestInterface();
};

FORCEINLINE uint32 GetTypeHash(const UTestActorComponentImplementingTestInterface) { return 0; }
