#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionPredictionKey.h"
#include "PendingInstantActionList.h"
#include "InstantActionList.h"
#include "ReversibleActionSystemComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class REVERSIBLEACTIONSYSTEM_API UReversibleActionSystemComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<FActionPredictionKey, FPendingInstantActionList> _pendingInstantActionHandlers;

	UPROPERTY(Transient)
	TMap<FActionPredictionKey, FInstantActionList> _predictedInstantActionHandlers;

public:
	UReversibleActionSystemComponent();
};

FORCEINLINE uint32 GetTypeHash(const UReversibleActionSystemComponent) { return 0; }
