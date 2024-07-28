#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "OnryoAnimInstance.generated.h"

UCLASS(NonTransient)
class UOnryoAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isTeleporting;

	UPROPERTY(BlueprintReadOnly)
	bool _isStartingUpTeleport;

	UPROPERTY(BlueprintReadOnly)
	float _teleportStartUpDuration;

	UPROPERTY(BlueprintReadOnly)
	bool _isCrawlingOutOfTV;

	UPROPERTY(BlueprintReadOnly)
	float _crawlingOutDuration;

	UPROPERTY(BlueprintReadOnly)
	bool _isTeleportCancelled;

	UPROPERTY(BlueprintReadOnly)
	float _teleportCancelledDuration;

	UPROPERTY(BlueprintReadOnly)
	bool _isEnteringManifest;

	UPROPERTY(BlueprintReadOnly)
	bool _isExitingManifest;

	UPROPERTY(BlueprintReadOnly)
	bool _isInOtherWorld;

public:
	UOnryoAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoAnimInstance) { return 0; }
