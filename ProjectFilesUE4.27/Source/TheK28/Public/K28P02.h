#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "K28P02.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28P02 : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float PerkActivationTime;

	UPROPERTY(EditDefaultsOnly)
	float LockerDetectionRadius;

public:
	UK28P02();
};

FORCEINLINE uint32 GetTypeHash(const UK28P02) { return 0; }
