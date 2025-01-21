#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TwinsAnimInstance.generated.h"

UCLASS(NonTransient)
class UTwinsAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDormant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasBrotherAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPossessing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isWakingUpFromPossess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAutoPossessingAfterRelease;

public:
	UTwinsAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTwinsAnimInstance) { return 0; }
