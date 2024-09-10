#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "PerspectiveDependentAnimSequenceSelector.h"
#include "WraithAnimInstance.generated.h"

UCLASS(NonTransient)
class UWraithAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isRingingBell;

	UPROPERTY(BlueprintReadOnly)
	bool _isCloaking;

	UPROPERTY(BlueprintReadOnly)
	bool _isUncloaking;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPerspectiveDependentAnimSequenceSelector _cloakingInSelector;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPerspectiveDependentAnimSequenceSelector _cloakingSelector;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPerspectiveDependentAnimSequenceSelector _cloakingOutSelector;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPerspectiveDependentAnimSequenceSelector _uncloakingInSelector;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPerspectiveDependentAnimSequenceSelector _uncloakingSelector;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPerspectiveDependentAnimSequenceSelector _uncloakingOutSelector;

	UPROPERTY(BlueprintReadOnly)
	float _cloakingPlayRate;

public:
	UWraithAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UWraithAnimInstance) { return 0; }
