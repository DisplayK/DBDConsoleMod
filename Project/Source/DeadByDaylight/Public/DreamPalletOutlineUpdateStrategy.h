#pragma once

#include "CoreMinimal.h"
#include "PalletOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DreamPalletOutlineUpdateStrategy.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDreamPalletOutlineUpdateStrategy : public UPalletOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedByMapColor;

protected:
	UFUNCTION()
	void InitializeTunableValues(ASlasherPlayer* killer);

public:
	UDreamPalletOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDreamPalletOutlineUpdateStrategy) { return 0; }
