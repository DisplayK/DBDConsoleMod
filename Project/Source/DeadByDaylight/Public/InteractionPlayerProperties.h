#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "InteractionPlayerProperties.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FInteractionPlayerProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector_NetQuantize AverageVelocityAtStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector_NetQuantize PlayerPositionAtStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator PlayerRotationAtStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TWeakObjectPtr<ADBDPlayer> Requester;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector_NetQuantize SnapPositionAtStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator SnapRotationAtStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float SnapDistanceAtStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float SnapTimeAtStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool ShouldSnapPosition;

public:
	DEADBYDAYLIGHT_API FInteractionPlayerProperties();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionPlayerProperties) { return 0; }
