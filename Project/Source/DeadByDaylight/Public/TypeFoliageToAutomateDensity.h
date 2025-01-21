#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "Components/SceneComponent.h"
#include "TypeFoliageToAutomateDensity.generated.h"

class UStaticMesh;

USTRUCT()
struct FTypeFoliageToAutomateDensity
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UStaticMesh> SourceMesh;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UStaticMesh> ReplacementMesh;

	UPROPERTY(EditDefaultsOnly)
	bool bGenerateOverlaps;

	UPROPERTY(EditDefaultsOnly)
	bool bReceiveDecals;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ECanBeCharacterBase> bCanCharacterStepOn;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<EDetailMode> DetailMode;

	UPROPERTY(EditDefaultsOnly)
	float MinimumFoliageRadius;

public:
	DEADBYDAYLIGHT_API FTypeFoliageToAutomateDensity();
};

FORCEINLINE uint32 GetTypeHash(const FTypeFoliageToAutomateDensity) { return 0; }
