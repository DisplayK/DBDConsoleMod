#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "AnimSequenceSelector.h"
#include "PalletAnimInstance.generated.h"

class ADBDPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UPalletAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isPulledDown;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingPulledUp;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingDestroyed;

	UPROPERTY(BlueprintReadOnly)
	float _isBeingDestroyedPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimSequenceSelector _destroyPalletAnim;

private:
	UFUNCTION()
	void OnBeingPulledUpStopped();

	UFUNCTION()
	void OnBeingPulledUpStarted(ADBDPlayer* player);

	UFUNCTION()
	void OnBeingDestroyedStopped();

	UFUNCTION()
	void OnBeingDestroyedStarted(ADBDPlayer* player);

public:
	UPalletAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UPalletAnimInstance) { return 0; }
