#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SmallGame.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USmallGame : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _detectionConeAngle;

	UPROPERTY(EditDefaultsOnly)
	float _detectionConeAngleReductionRate;

	UPROPERTY(BlueprintReadOnly)
	bool _totemDetected;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void VFXTotemFound();

	UFUNCTION(BlueprintImplementableEvent)
	void SearchForTotems();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TotemFound();

private:
	UFUNCTION(BlueprintPure)
	float GetDetectionConeAngle() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetTotemDetected(bool value);

public:
	USmallGame();
};

FORCEINLINE uint32 GetTypeHash(const USmallGame) { return 0; }
