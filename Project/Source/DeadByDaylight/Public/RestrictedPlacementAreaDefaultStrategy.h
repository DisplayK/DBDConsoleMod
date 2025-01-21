#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "Templates/SubclassOf.h"
#include "RestrictedPlacementAreaDefaultStrategy.generated.h"

class AActor;

UCLASS(EditInlineNew)
class URestrictedPlacementAreaDefaultStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> RestrictedActor;

public:
	URestrictedPlacementAreaDefaultStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URestrictedPlacementAreaDefaultStrategy) { return 0; }
