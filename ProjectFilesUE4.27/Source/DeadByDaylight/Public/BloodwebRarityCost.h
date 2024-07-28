#pragma once

#include "CoreMinimal.h"
#include "BloodwebRarityCost.generated.h"

USTRUCT()
struct FBloodwebRarityCost
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Artifact;

	UPROPERTY()
	int32 Common;

	UPROPERTY()
	int32 Legendary;

	UPROPERTY()
	int32 Rare;

	UPROPERTY()
	int32 SpecialEvent;

	UPROPERTY()
	int32 Spectral;

	UPROPERTY()
	int32 Teachable;

	UPROPERTY()
	int32 UltraRare;

	UPROPERTY()
	int32 Uncommon;

	UPROPERTY()
	int32 VeryRare;

public:
	DEADBYDAYLIGHT_API FBloodwebRarityCost();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebRarityCost) { return 0; }
