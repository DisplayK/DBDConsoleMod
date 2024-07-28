#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "YamaokaFamilyCrest.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UYamaokaFamilyCrest : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _revealDuration;

private:
	UPROPERTY(EditAnywhere)
	float _revealRange;

	UPROPERTY(Replicated, Transient)
	TArray<ACamperPlayer*> _survivorsToReveal;

	UPROPERTY(ReplicatedUsing=OnRep_AddonActivationCount, Transient)
	uint8 _addonActivationCount;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void RevealSurvivor(ACamperPlayer* survivorToReveal);

private:
	UFUNCTION()
	void OnRep_AddonActivationCount();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UYamaokaFamilyCrest();
};

FORCEINLINE uint32 GetTypeHash(const UYamaokaFamilyCrest) { return 0; }
