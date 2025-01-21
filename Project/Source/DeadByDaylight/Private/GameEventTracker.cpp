#include "GameEventTracker.h"
#include "EDBDScoreTypes.h"

class ADBDPlayerState;
class AActor;

void UGameEventTracker::FireGameflowEvent(EDBDScoreTypes eventType, float amount, const ADBDPlayerState* instigator, FName data)
{

}

void UGameEventTracker::FireGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target)
{

}

UGameEventTracker::UGameEventTracker()
{

}
