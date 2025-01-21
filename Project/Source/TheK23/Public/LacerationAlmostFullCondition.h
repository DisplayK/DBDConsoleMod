#pragma once

#include "CoreMinimal.h"
#include "BaseLacerationLevelCondition.h"
#include "LacerationAlmostFullCondition.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class THEK23_API ULacerationAlmostFullCondition : public UBaseLacerationLevelCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _missingLacerationThreshold;

public:
	ULacerationAlmostFullCondition();
};

FORCEINLINE uint32 GetTypeHash(const ULacerationAlmostFullCondition) { return 0; }
