#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Babysitter.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBabysitter : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _scratchMarkHidingTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hasteEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _showAuraTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _cooldownTime;

public:
	UBabysitter();
};

FORCEINLINE uint32 GetTypeHash(const UBabysitter) { return 0; }
