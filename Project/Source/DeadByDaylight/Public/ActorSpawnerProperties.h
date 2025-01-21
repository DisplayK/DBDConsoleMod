#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ActorSpawnerProperties.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorSpawnerProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> SceneElement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

public:
	DEADBYDAYLIGHT_API FActorSpawnerProperties();
};

FORCEINLINE uint32 GetTypeHash(const FActorSpawnerProperties) { return 0; }
