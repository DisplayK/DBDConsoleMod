#pragma once

#include "CoreMinimal.h"
#include "AffectedMaterialAndVariant.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FAffectedMaterialAndVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* AffectedMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* MaterialVariant;

public:
	DEADBYDAYLIGHT_API FAffectedMaterialAndVariant();
};

FORCEINLINE uint32 GetTypeHash(const FAffectedMaterialAndVariant) { return 0; }
