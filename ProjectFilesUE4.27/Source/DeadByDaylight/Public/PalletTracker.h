#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalletTracker.generated.h"

class ASlasherPlayer;
class USceneComponent;
class APallet;

UCLASS()
class DEADBYDAYLIGHT_API APalletTracker : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Replicated, Transient)
	APallet* _procedurallySpawnedPallet;

	UPROPERTY(BlueprintReadWrite, Replicated, Transient)
	APallet* _dreamPallet;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _indicatorLocation;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RevealToLocalPlayerBP(bool shown);

private:
	UFUNCTION()
	void InitializeTunableValues(ASlasherPlayer* slasher);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EnableSelectedEffectToLocalPlayer(bool activated);

	UFUNCTION(BlueprintPure)
	bool CanSpawnDreamPalletAtLocation() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	APalletTracker();
};

FORCEINLINE uint32 GetTypeHash(const APalletTracker) { return 0; }
