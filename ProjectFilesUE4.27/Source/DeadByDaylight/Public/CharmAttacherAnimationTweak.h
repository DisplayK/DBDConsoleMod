#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharmAttacherAnimationTweak.generated.h"

USTRUCT(BlueprintType)
struct FCharmAttacherAnimationTweak
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AttachPointTranslation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator AttachPointRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ConstraintType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MagicTweakingFloat;

public:
	DEADBYDAYLIGHT_API FCharmAttacherAnimationTweak();
};

FORCEINLINE uint32 GetTypeHash(const FCharmAttacherAnimationTweak) { return 0; }
