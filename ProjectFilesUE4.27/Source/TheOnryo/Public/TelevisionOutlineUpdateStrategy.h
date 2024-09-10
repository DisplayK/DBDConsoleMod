#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "TelevisionOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTelevisionOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _survivorAuraColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _slasherPoweredColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedByMapColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _slasherUnpoweredDefaultColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _slasherUnpoweredVisibleColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _slasherTeleportTargetColor;

public:
	UTelevisionOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTelevisionOutlineUpdateStrategy) { return 0; }
