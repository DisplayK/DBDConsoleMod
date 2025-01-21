#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "PlayerGameRelevancyComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerGameRelevancyComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	FTagStateBool _isRelevantToGameplay;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPlayerGameRelevancyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerGameRelevancyComponent) { return 0; }
