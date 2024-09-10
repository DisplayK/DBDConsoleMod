#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "TwinOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _visibleColorForKiller;

public:
	UTwinOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTwinOutlineUpdateStrategy) { return 0; }
