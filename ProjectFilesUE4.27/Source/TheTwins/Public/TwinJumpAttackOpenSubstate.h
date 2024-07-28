#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TwinJumpAttackOpenSubstate.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS()
class UTwinJumpAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void Local_OnTwinOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& hit);

	UFUNCTION()
	void Local_OnTwinCapsuleHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);

public:
	UTwinJumpAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAttackOpenSubstate) { return 0; }
