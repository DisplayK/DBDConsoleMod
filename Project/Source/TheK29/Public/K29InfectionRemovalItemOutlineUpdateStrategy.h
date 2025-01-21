#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "K29InfectionRemovalItemOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29InfectionRemovalItemOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	bool _isOutlineEnabled;

	UPROPERTY(EditDefaultsOnly)
	FColor _outlineColour;

public:
	UFUNCTION(BlueprintCallable)
	void SetOutlineVisibility(bool isActive);

	UFUNCTION(BlueprintPure)
	bool IsOutlineVisible() const;

public:
	UK29InfectionRemovalItemOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK29InfectionRemovalItemOutlineUpdateStrategy) { return 0; }
