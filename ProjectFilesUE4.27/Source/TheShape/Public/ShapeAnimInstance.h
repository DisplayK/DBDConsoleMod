#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "ShapeAnimInstance.generated.h"

class UEvilWithinComponent;

UCLASS(NonTransient)
class UShapeAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isTier3Active;

private:
	UPROPERTY(Transient, Export)
	UEvilWithinComponent* _evilWithinComponent;

public:
	UShapeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UShapeAnimInstance) { return 0; }
