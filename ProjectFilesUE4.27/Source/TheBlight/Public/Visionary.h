#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Visionary.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UVisionary : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _auraVisibilityRange;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

public:
	UVisionary();
};

FORCEINLINE uint32 GetTypeHash(const UVisionary) { return 0; }
