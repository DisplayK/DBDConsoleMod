#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "K29P01.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK29P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _survivorVaultRushedEventRange;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownTime;

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorVaultRushedEventRange() const;

public:
	UK29P01();
};

FORCEINLINE uint32 GetTypeHash(const UK29P01) { return 0; }
