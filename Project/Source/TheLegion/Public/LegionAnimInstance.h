#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "LegionAnimInstance.generated.h"

UCLASS(NonTransient)
class ULegionAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isFrenzy;

public:
	ULegionAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULegionAnimInstance) { return 0; }
