#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "KatsumoriTalisman.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKatsumoriTalisman : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<AActor*> _blockableWindows;

	UPROPERTY(EditDefaultsOnly)
	float _explosionRadius;

	UPROPERTY(EditDefaultsOnly)
	float _blockDuration;

public:
	UKatsumoriTalisman();
};

FORCEINLINE uint32 GetTypeHash(const UKatsumoriTalisman) { return 0; }
