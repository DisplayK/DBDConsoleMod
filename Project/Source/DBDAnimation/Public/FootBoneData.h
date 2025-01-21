#pragma once

#include "CoreMinimal.h"
#include "FootBoneData.generated.h"

class UCurveVector;

USTRUCT()
struct FFootBoneData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UCurveVector* RightFootCurve;

	UPROPERTY(Transient)
	UCurveVector* LeftFootCurve;

public:
	DBDANIMATION_API FFootBoneData();
};

FORCEINLINE uint32 GetTypeHash(const FFootBoneData) { return 0; }
