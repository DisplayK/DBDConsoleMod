#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveToGroundComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UMoveToGroundComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void MoveOwnerToGround();

public:
	UMoveToGroundComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMoveToGroundComponent) { return 0; }
