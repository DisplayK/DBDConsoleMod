#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDMenuSilhouette.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDMenuSilhouette : public AActor
{
	GENERATED_BODY()

public:
	ADBDMenuSilhouette();
};

FORCEINLINE uint32 GetTypeHash(const ADBDMenuSilhouette) { return 0; }
