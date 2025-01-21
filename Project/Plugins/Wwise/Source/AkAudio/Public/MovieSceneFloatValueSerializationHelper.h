#pragma once

#include "CoreMinimal.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"
#include "MovieSceneTangentDataSerializationHelper.h"
#include "MovieSceneFloatValueSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValueSerializationHelper
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float Value;

	UPROPERTY()
	TEnumAsByte<ERichCurveInterpMode> InterpMode;

	UPROPERTY()
	TEnumAsByte<ERichCurveTangentMode> TangentMode;

	UPROPERTY()
	FMovieSceneTangentDataSerializationHelper Tangent;

public:
	AKAUDIO_API FMovieSceneFloatValueSerializationHelper();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneFloatValueSerializationHelper) { return 0; }
