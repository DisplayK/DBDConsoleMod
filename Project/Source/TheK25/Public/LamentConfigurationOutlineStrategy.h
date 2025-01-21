#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "LamentConfigurationOutlineStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULamentConfigurationOutlineStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FLinearColor _noChainHuntProgressColor;

	UPROPERTY(EditAnywhere)
	FLinearColor _chainHuntActiveColor;

	UPROPERTY(EditAnywhere)
	FLinearColor _killerColor;

public:
	ULamentConfigurationOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationOutlineStrategy) { return 0; }
