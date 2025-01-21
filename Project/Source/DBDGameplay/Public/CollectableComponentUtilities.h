#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollectableComponentUtilities.generated.h"

class UActorComponent;
class ADBDPlayer;

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UCollectableComponentUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static ADBDPlayer* GetCollector(const UActorComponent* component);

public:
	UCollectableComponentUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCollectableComponentUtilities) { return 0; }
