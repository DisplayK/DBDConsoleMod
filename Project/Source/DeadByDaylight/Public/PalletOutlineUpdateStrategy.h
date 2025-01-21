#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VaultableOutlineUpdateStrategy.h"
#include "PalletOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPalletOutlineUpdateStrategy : public UVaultableOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedByPowerColor;

public:
	UPalletOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UPalletOutlineUpdateStrategy) { return 0; }
