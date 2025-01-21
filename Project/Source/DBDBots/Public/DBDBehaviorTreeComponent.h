#pragma once

#include "CoreMinimal.h"
#include "RelevantNodeMemory.h"
#include "AIDisplayDebugInterface.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "DBDBehaviorTreeComponent.generated.h"

class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDBehaviorTreeComponent : public UBehaviorTreeComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<UClass*, FRelevantNodeMemory> _lastRelevantNodeMemories;

	UPROPERTY(Transient)
	TArray<UObject*> _createdObjects;

public:
	UDBDBehaviorTreeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBehaviorTreeComponent) { return 0; }
