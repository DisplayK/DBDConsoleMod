#pragma once

#include "CoreMinimal.h"
#include "DBDLocatorComponent.h"
#include "DBDMistLocatorComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDMistLocatorComponent : public UDBDLocatorComponent
{
	GENERATED_BODY()

public:
	UDBDMistLocatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDMistLocatorComponent) { return 0; }
