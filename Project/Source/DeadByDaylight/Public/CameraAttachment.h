#pragma once

#include "CoreMinimal.h"
#include "CameraAttachment.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FCameraAttachment
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	USceneComponent* Parent;

public:
	DEADBYDAYLIGHT_API FCameraAttachment();
};

FORCEINLINE uint32 GetTypeHash(const FCameraAttachment) { return 0; }
