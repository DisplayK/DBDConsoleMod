#pragma once

#include "CoreMinimal.h"
#include "TestInterface.h"
#include "GameFramework/Actor.h"
#include "TestActorImplementingTestInterface.generated.h"

UCLASS()
class UNITTESTUTILITIES_API ATestActorImplementingTestInterface : public AActor, public ITestInterface
{
	GENERATED_BODY()

public:
	ATestActorImplementingTestInterface();
};

FORCEINLINE uint32 GetTypeHash(const ATestActorImplementingTestInterface) { return 0; }
