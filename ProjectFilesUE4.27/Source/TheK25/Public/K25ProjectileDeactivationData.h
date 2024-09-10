#pragma once

#include "CoreMinimal.h"
#include "EK25ProjectileDeactivateReason.h"
#include "K25ProjectileDeactivationData.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK25ProjectileDeactivationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EK25ProjectileDeactivateReason DeactivationReason;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName PhysicalSurfaceName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool ShouldReelBackProjectile;

	UPROPERTY(BlueprintReadOnly)
	bool HasAppliedDamage;

	UPROPERTY(BlueprintReadOnly)
	ACamperPlayer* _survivorHit;

public:
	THEK25_API FK25ProjectileDeactivationData();
};

FORCEINLINE uint32 GetTypeHash(const FK25ProjectileDeactivationData) { return 0; }
