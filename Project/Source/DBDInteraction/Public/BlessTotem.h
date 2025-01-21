#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "BlessTotem.generated.h"

class ATotem;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBlessTotem : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	FDBDTunableRowHandle _blessHexTotemSpeedPenalty;

private:
	UFUNCTION(BlueprintPure)
	ATotem* GetTotem() const;

public:
	UBlessTotem();
};

FORCEINLINE uint32 GetTypeHash(const UBlessTotem) { return 0; }
