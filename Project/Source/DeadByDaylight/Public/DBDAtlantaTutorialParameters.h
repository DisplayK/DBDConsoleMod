#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDAtlantaTutorialParameters.generated.h"

UCLASS(BlueprintType, Transient)
class DEADBYDAYLIGHT_API UDBDAtlantaTutorialParameters : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	float SurvTutorial_WiggleChargeRateMultiplier;

public:
	UDBDAtlantaTutorialParameters();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAtlantaTutorialParameters) { return 0; }
