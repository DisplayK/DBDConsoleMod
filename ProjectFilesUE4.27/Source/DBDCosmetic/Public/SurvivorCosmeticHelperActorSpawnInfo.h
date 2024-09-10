#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "SurvivorCosmeticHelperActorSpawnInfo.generated.h"

class ASurvivorCosmeticHelperActor;

USTRUCT()
struct FSurvivorCosmeticHelperActorSpawnInfo: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag KillerPresenceTag;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<ASurvivorCosmeticHelperActor> SurvivorCosmeticActorClass;

public:
	DBDCOSMETIC_API FSurvivorCosmeticHelperActorSpawnInfo();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorCosmeticHelperActorSpawnInfo) { return 0; }
