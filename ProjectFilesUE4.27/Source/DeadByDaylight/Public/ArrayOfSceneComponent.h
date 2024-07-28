#pragma once

#include "CoreMinimal.h"
#include "ArrayOfSceneComponent.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FArrayOfSceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> sceneComp;

public:
	DEADBYDAYLIGHT_API FArrayOfSceneComponent();
};

FORCEINLINE uint32 GetTypeHash(const FArrayOfSceneComponent) { return 0; }
