#pragma once

#include "CoreMinimal.h"
#include "BaseManifestInteraction.h"
#include "ManifestInteraction.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UManifestInteraction : public UBaseManifestInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	UCurveFloat* _postManifestSpeedCurve;

	UPROPERTY(EditAnywhere)
	float _postManifestSpeedCurveDuration;

public:
	UManifestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UManifestInteraction) { return 0; }
