#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "K26CrowAttachmentSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UK26CrowAttachmentSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasCrowAttached;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isRemovingCrow;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDead;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHooked;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInsideCloset;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInteracting;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingSmallItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingAimItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

public:
	UK26CrowAttachmentSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK26CrowAttachmentSubAnimInstance) { return 0; }
