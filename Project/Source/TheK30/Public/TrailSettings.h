#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "TrailSettings.generated.h"

class ATrailNode;

USTRUCT()
struct FTrailSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle MaximumDistanceBetweenNodes;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle MinimumDistanceBetweenVisualNodes;

	UPROPERTY(EditDefaultsOnly)
	float CapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	float CapsuleRadius;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ATrailNode> _trailNodeClass;

public:
	THEK30_API FTrailSettings();
};

FORCEINLINE uint32 GetTypeHash(const FTrailSettings) { return 0; }
