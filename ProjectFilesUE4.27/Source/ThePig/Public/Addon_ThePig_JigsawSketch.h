#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_ThePig_JigsawSketch.generated.h"

class AGenerator;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_ThePig_JigsawSketch : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<ACamperPlayer*, AGenerator*> _trackedGeneratorRepairs;

public:
	UAddon_ThePig_JigsawSketch();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_ThePig_JigsawSketch) { return 0; }
