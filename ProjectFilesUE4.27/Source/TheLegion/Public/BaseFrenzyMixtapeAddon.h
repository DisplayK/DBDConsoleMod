#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "BaseFrenzyMixtapeAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBaseFrenzyMixtapeAddon : public UItemAddon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FName> _audioSwitchGroups;

	UPROPERTY(EditDefaultsOnly)
	FName _audioSwitchState;

public:
	UBaseFrenzyMixtapeAddon();
};

FORCEINLINE uint32 GetTypeHash(const UBaseFrenzyMixtapeAddon) { return 0; }
