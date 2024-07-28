#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatProperty.h"
#include "DBDAttackSubstate.generated.h"

class UCurveFloat;

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackSubstate : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FStatProperty _duration;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _speedCurve;

	UPROPERTY(EditDefaultsOnly)
	FName _montage;

	UPROPERTY(Transient)
	UCurveFloat* _currentCurve;

public:
	UDBDAttackSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackSubstate) { return 0; }
