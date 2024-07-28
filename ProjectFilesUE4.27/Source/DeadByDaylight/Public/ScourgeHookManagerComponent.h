#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScourgeHookManagerComponent.generated.h"

class AMeatHook;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UScourgeHookManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ScourgeHooks, Transient)
	TArray<TWeakObjectPtr<AMeatHook>> _scourgeHooks;

private:
	UFUNCTION()
	void OnRep_ScourgeHooks();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UScourgeHookManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UScourgeHookManagerComponent) { return 0; }
