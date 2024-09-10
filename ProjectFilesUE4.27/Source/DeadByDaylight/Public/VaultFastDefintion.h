#pragma once

#include "CoreMinimal.h"
#include "VaultDefinition.h"
#include "VaultFastDefintion.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultFastDefintion : public UVaultDefinition
{
	GENERATED_BODY()

public:
	UVaultFastDefintion();
};

FORCEINLINE uint32 GetTypeHash(const UVaultFastDefintion) { return 0; }
