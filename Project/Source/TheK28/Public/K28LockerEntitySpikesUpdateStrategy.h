#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "K28LockerEntitySpikesUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28LockerEntitySpikesUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _outlineColor;

public:
	UK28LockerEntitySpikesUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK28LockerEntitySpikesUpdateStrategy) { return 0; }
