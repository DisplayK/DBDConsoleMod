#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "RedEnvelopeOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class URedEnvelopeOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _auraColorOwner;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _auraColorNonOwner;

public:
	URedEnvelopeOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URedEnvelopeOutlineUpdateStrategy) { return 0; }
