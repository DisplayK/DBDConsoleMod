#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_Random.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_Random : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAITunableParameter PercentageRatio;

public:
	UBTDecorator_Random();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_Random) { return 0; }
