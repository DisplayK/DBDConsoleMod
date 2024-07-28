#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "DemogorgonPower.generated.h"

class AActor;

UCLASS()
class ADemogorgonPower : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _demogorgonHuskClass;

	UPROPERTY(Transient)
	AActor* _demogorgonHusk;

public:
	ADemogorgonPower();
};

FORCEINLINE uint32 GetTypeHash(const ADemogorgonPower) { return 0; }
