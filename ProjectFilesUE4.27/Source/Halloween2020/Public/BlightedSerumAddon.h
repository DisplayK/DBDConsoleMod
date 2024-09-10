#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "BlightedSerumAddon.generated.h"

class ACollectable;
class UBlightedSerumDashInteraction;

UCLASS(meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACollectable> _blightedSerumCollectable;

	UPROPERTY(ReplicatedUsing=OnRep_DashInteraction, Transient, Export)
	UBlightedSerumDashInteraction* _dashInteraction;

	UPROPERTY(EditDefaultsOnly)
	int32 _theBlightExtraTokens;

	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfDashesPerEvent;

private:
	UFUNCTION()
	void OnRep_DashInteraction();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnBlightedDashEnabledVfxSfx();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlightedSerumAddon();
};

FORCEINLINE uint32 GetTypeHash(const UBlightedSerumAddon) { return 0; }
