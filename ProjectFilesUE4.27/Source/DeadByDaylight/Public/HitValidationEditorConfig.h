#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHitValidatorConfigName.h"
#include "HitValidationEditorConfig.generated.h"

USTRUCT(BlueprintType)
struct FHitValidationEditorConfig: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EHitValidatorConfigName ConfigName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CapsuleInflation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaximumDistance;

public:
	DEADBYDAYLIGHT_API FHitValidationEditorConfig();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationEditorConfig) { return 0; }
