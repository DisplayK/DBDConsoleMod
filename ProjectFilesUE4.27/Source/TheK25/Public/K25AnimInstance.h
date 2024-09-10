#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K25AnimInstance.generated.h"

UCLASS(NonTransient)
class UK25AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isTeleporting;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isPossessingGateway;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isSelectingGatewayLocation;

public:
	UK25AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25AnimInstance) { return 0; }
