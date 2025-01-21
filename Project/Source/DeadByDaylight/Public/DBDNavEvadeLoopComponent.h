#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EAIEvadeLoopSides.h"
#include "Engine/EngineTypes.h"
#include "DBDNavEvadeLoopComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDNavEvadeLoopComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector EvadeDoorExtent;

	UPROPERTY(EditAnywhere)
	float EvadeDoorFrontPointOffset;

	UPROPERTY(EditAnywhere)
	float EvadeDoorSideOffset;

	UPROPERTY(EditAnywhere)
	float SideBlockerOffset;

	UPROPERTY(EditAnywhere)
	float AutoSnapPointsUpHeight;

	UPROPERTY(EditAnywhere)
	float AutoSnapPointsDownHeight;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ECollisionChannel> AutoSnapCollisionChannel;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UNavigationQueryFilter> EvadeLoopFilterClass;

	UPROPERTY(EditAnywhere)
	float MinSafetyLength;

	UPROPERTY(EditAnywhere)
	float MaxSafetyLength;

	UPROPERTY(EditAnywhere)
	EAIEvadeLoopSides LimitToSide;

	UPROPERTY(EditAnywhere)
	bool DebugEditMode;

	UPROPERTY(EditAnywhere)
	bool DrawDebugFilter;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UDBDNavEvadeLoopComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDNavEvadeLoopComponent) { return 0; }
