#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpecialBehaviourObjectsInfo.h"
#include "ContextualQuestComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UContextualQuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpecialBehaviourSet, const ADBDPlayer*, dbdPlayer);

private:
	UPROPERTY(ReplicatedUsing=OnRep_SpecialBehaviourObjectsInfo, Transient)
	TArray<FSpecialBehaviourObjectsInfo> _specialBehaviourObjectsInfo;

	UPROPERTY(Transient)
	bool _isInitialized;

private:
	UFUNCTION()
	void OnRep_SpecialBehaviourObjectsInfo();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_DebugRemoveSpecialBehaviour(FName id);

	UFUNCTION(BlueprintCallable)
	void Authority_DebugAddSpecialBehaviour(FName id, float amountRequired);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UContextualQuestComponent();
};

FORCEINLINE uint32 GetTypeHash(const UContextualQuestComponent) { return 0; }
