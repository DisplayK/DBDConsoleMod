#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmSlot.generated.h"

class ACharmAttacher;

USTRUCT()
struct FCharmSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 SlotIndex;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<ACharmAttacher> CharmAttacherClass;

	UPROPERTY(EditAnywhere)
	FCharmAttacherAnimationTweak DefaultAnimationTweak;

	UPROPERTY(EditAnywhere)
	TMap<FName, FCharmAttacherAnimationTweak> AnimationTweakByTag;

	UPROPERTY(Transient)
	ACharmAttacher* CharmAttacherSpawned;

public:
	DEADBYDAYLIGHT_API FCharmSlot();
};

FORCEINLINE uint32 GetTypeHash(const FCharmSlot) { return 0; }
