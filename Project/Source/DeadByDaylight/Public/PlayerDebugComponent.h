#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerDebugComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerDebugComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	bool _disableStartUpdateMontageDuringEnter;

	UPROPERTY(Replicated)
	bool _allowPalletPullUpInteraction;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPlayerDebugComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerDebugComponent) { return 0; }
