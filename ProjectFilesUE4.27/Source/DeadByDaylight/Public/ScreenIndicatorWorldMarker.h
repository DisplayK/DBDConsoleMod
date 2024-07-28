#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EHudScreenIndicatorType.h"
#include "ScreenIndicatorWorldMarker.generated.h"

class UTexture2D;

UCLASS()
class DEADBYDAYLIGHT_API AScreenIndicatorWorldMarker : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* HudScreenIndicatorIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHudScreenIndicatorType HudScreenIndicatorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange VisibleDistanceRange;

public:
	AScreenIndicatorWorldMarker();
};

FORCEINLINE uint32 GetTypeHash(const AScreenIndicatorWorldMarker) { return 0; }
