#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "ObjectPlacementValidationWithRestrictionStrategy.generated.h"

class URestrictedPlacementAreaStrategy;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectPlacementValidationWithRestrictionStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, NoClear, Export)
	TArray<URestrictedPlacementAreaStrategy*> _restrictedAreas;

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UObjectPlacementValidationWithRestrictionStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UObjectPlacementValidationWithRestrictionStrategy) { return 0; }
