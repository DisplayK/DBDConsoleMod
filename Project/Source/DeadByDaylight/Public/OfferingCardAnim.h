#pragma once

#include "CoreMinimal.h"
#include "EOfferingAnimState.h"
#include "Animation/AnimInstance.h"
#include "OfferingCardAnim.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UOfferingCardAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardDissolved);

private:
	UPROPERTY(BlueprintAssignable)
	FOnCardDissolved _onCardDissolved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EOfferingAnimState _activeState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isRevealed;

public:
	UOfferingCardAnim();
};

FORCEINLINE uint32 GetTypeHash(const UOfferingCardAnim) { return 0; }
