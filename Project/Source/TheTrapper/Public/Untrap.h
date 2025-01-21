#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "Untrap.generated.h"

class ABearTrap;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUntrap : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FString> _overridableInteractions;

	UPROPERTY(EditAnywhere)
	FName _bearTrapUpdateMontageID;

	UPROPERTY(EditAnywhere)
	FName _bearTrapFinishMontageID;

protected:
	UFUNCTION(BlueprintPure)
	ABearTrap* GetTrap() const;

public:
	UUntrap();
};

FORCEINLINE uint32 GetTypeHash(const UUntrap) { return 0; }
