#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Whispers.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UWhispers : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _timeBetweenAudio;

private:
	UPROPERTY(ReplicatedUsing=OnRep_SurvivorsInRange)
	int32 _survivorsInRange;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnWhispersAudio();

private:
	UFUNCTION()
	void OnRep_SurvivorsInRange();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FireAudioEvent(const int32 survivorsInRange);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UWhispers();
};

FORCEINLINE uint32 GetTypeHash(const UWhispers) { return 0; }
