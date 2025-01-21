#include "LoudNoiseNotifier.h"
#include "UObject/NoExportTypes.h"

class ADBDPlayer;
class UObject;
class AActor;

void ULoudNoiseNotifier::FireWithTimeBudgeter(const UObject* worldContextObject, AActor* instigator, const FVector& location, bool shouldTrack, float audibleRange, ADBDPlayer* instigatingPlayer, bool isQuickAction)
{

}

void ULoudNoiseNotifier::Fire(const UObject* worldContextObject, AActor* instigator, const FVector& location, bool shouldTrack, float audibleRange, ADBDPlayer* instigatingPlayer, bool isQuickAction, bool isDeceivingNoise)
{

}

ULoudNoiseNotifier::ULoudNoiseNotifier()
{

}
