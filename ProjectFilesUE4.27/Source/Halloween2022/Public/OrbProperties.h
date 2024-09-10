#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVoidEnergyType.h"
#include "OrbProperties.generated.h"

USTRUCT()
struct FOrbProperties
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EVoidEnergyType VoidEnergyType;

	UPROPERTY()
	FVector SpawnLocation;

	UPROPERTY()
	FVector HoverLocation;

	UPROPERTY()
	FVector CustomEndLocation;

public:
	HALLOWEEN2022_API FOrbProperties();
};

FORCEINLINE uint32 GetTypeHash(const FOrbProperties) { return 0; }
