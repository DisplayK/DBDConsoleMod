#pragma once

#include "CoreMinimal.h"
#include "CompositeModifierCondition.h"
#include "OrModifierCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UOrModifierCondition : public UCompositeModifierCondition
{
	GENERATED_BODY()

public:
	UOrModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const UOrModifierCondition) { return 0; }
