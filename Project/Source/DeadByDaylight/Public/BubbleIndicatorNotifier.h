#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BubbleIndicatorNotifier.generated.h"

class UStaticMesh;
class ABubbleIndicator;
class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UBubbleIndicatorNotifier : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	static void SpawnBubbleIndicator(UObject* worldContextObject, TSubclassOf<ABubbleIndicator> bubbleIndicatorBP, FTransform transform, bool triggerLoudNoise, bool spawnOnKillerSideOnly, float lifetime, UStaticMesh* silhouetteStaticMesh, float audibleRange);

	UFUNCTION(BlueprintCallable)
	static ABubbleIndicator* PreSpawnBubbleIndicator(UObject* worldContextObject, TSubclassOf<ABubbleIndicator> bubbleIndicatorBP, UStaticMesh* silhouetteStaticMesh);

	UFUNCTION(BlueprintCallable)
	static void ActivateBubbleIndicator(UObject* worldContextObject, ABubbleIndicator* bubbleIndicator, FTransform transform, bool triggerLoudNoise, float lifetime, float audibleRange);

public:
	UBubbleIndicatorNotifier();
};

FORCEINLINE uint32 GetTypeHash(const UBubbleIndicatorNotifier) { return 0; }
