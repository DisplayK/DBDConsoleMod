#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S32P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US32P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _activationTime;

public:
	UFUNCTION(BlueprintPure)
	float GetActivationTimeForLevel() const;

public:
	US32P03();
};

FORCEINLINE uint32 GetTypeHash(const US32P03) { return 0; }
