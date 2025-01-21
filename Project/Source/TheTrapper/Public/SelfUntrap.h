#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "AnimationMontageDescriptor.h"
#include "SelfUntrap.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USelfUntrap : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _trapImmunityDuration;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _successfulEscapeHealthy;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _successfulEscapeInjured;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _successfulEscapeCrawling;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _failedEscape;

	UPROPERTY(Replicated)
	bool _canEscape;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USelfUntrap();
};

FORCEINLINE uint32 GetTypeHash(const USelfUntrap) { return 0; }
