#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CustomizedHudPlayerWrapperIdMapContainer.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedHudPlayerWrapperIdMapContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> Ids;

public:
	DEADBYDAYLIGHT_API FCustomizedHudPlayerWrapperIdMapContainer();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizedHudPlayerWrapperIdMapContainer) { return 0; }
