#include "BubbleIndicatorNotifier.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"

class UStaticMesh;
class ABubbleIndicator;
class UObject;

void UBubbleIndicatorNotifier::SpawnBubbleIndicator(UObject* worldContextObject, TSubclassOf<ABubbleIndicator> bubbleIndicatorBP, FTransform transform, bool triggerLoudNoise, bool spawnOnKillerSideOnly, float lifetime, UStaticMesh* silhouetteStaticMesh, float audibleRange)
{

}

ABubbleIndicator* UBubbleIndicatorNotifier::PreSpawnBubbleIndicator(UObject* worldContextObject, TSubclassOf<ABubbleIndicator> bubbleIndicatorBP, UStaticMesh* silhouetteStaticMesh)
{
	return NULL;
}

void UBubbleIndicatorNotifier::ActivateBubbleIndicator(UObject* worldContextObject, ABubbleIndicator* bubbleIndicator, FTransform transform, bool triggerLoudNoise, float lifetime, float audibleRange)
{

}

UBubbleIndicatorNotifier::UBubbleIndicatorNotifier()
{

}
