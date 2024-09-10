#pragma once

#include "CoreMinimal.h"
#include "BaseLockerItem.h"
#include "HatchetRack.generated.h"

UCLASS()
class AHatchetRack : public ABaseLockerItem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetMovableHatchetVisibility(bool visible);

public:
	AHatchetRack();
};

FORCEINLINE uint32 GetTypeHash(const AHatchetRack) { return 0; }
