#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Frenzy_StolenSketchBook.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_StolenSketchBook : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _dropItemAfterChainedHitNumber;

public:
	UAddon_Frenzy_StolenSketchBook();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_StolenSketchBook) { return 0; }
