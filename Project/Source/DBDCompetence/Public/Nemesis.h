#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Nemesis.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UNemesis : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _revealToKillerTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _obliviousTime;

public:
	UNemesis();
};

FORCEINLINE uint32 GetTypeHash(const UNemesis) { return 0; }
