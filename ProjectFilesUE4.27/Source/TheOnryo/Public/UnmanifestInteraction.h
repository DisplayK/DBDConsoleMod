#pragma once

#include "CoreMinimal.h"
#include "BaseManifestInteraction.h"
#include "UnmanifestInteraction.generated.h"

class AOnryoPower;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUnmanifestInteraction : public UBaseManifestInteraction
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetOnryoPower(AOnryoPower* onryoPower);

public:
	UUnmanifestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UUnmanifestInteraction) { return 0; }
