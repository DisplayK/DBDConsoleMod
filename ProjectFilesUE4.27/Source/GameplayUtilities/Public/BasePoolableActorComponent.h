#pragma once

#include "CoreMinimal.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "Components/ActorComponent.h"
#include "BasePoolableActorComponent.generated.h"

UCLASS(BlueprintType, Abstract, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UBasePoolableActorComponent : public UActorComponent, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

public:
	UFUNCTION(BlueprintCallable)
	void SetAcquired(bool active);

	UFUNCTION(BlueprintPure)
	bool IsAcquired() const;

public:
	UBasePoolableActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBasePoolableActorComponent) { return 0; }
