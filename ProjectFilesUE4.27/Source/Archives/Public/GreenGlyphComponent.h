#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GreenGlyphComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGreenGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _revealAuraGlyphDuration;

	UPROPERTY(ReplicatedUsing=OnRep_SetShouldOutlineBeActive)
	bool _shouldOutlineBeActive;

private:
	UFUNCTION()
	void OnRep_SetShouldOutlineBeActive();

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Cheat_ShowAuraGreenGlyphActive(bool enabled, bool bForceShowAura);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGreenGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGreenGlyphComponent) { return 0; }
