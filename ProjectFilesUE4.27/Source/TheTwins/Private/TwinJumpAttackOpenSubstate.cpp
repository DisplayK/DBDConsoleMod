#include "TwinJumpAttackOpenSubstate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UTwinJumpAttackOpenSubstate::Local_OnTwinOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& hit)
{

}

void UTwinJumpAttackOpenSubstate::Local_OnTwinCapsuleHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit)
{

}

UTwinJumpAttackOpenSubstate::UTwinJumpAttackOpenSubstate()
{

}
