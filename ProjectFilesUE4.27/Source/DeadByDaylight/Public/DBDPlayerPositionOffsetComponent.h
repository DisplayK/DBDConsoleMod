#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Components/ActorComponent.h"
#include "DBDPlayerPositionOffsetComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPlayerPositionOffsetComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _menuZHeadOffset;

public:
	UDBDPlayerPositionOffsetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPlayerPositionOffsetComponent) { return 0; }
