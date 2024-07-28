#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestMovableActor.generated.h"

class UBoxComponent;

UCLASS()
class UNITTESTUTILITIES_API ATestMovableActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UBoxComponent* BoxComponent;

public:
	ATestMovableActor();
};

FORCEINLINE uint32 GetTypeHash(const ATestMovableActor) { return 0; }
