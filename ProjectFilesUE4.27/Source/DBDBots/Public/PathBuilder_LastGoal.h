#pragma once

#include "CoreMinimal.h"
#include "PathBuilder.h"
#include "PathBuilder_LastGoal.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UPathBuilder_LastGoal : public UPathBuilder
{
	GENERATED_BODY()

public:
	UPathBuilder_LastGoal();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder_LastGoal) { return 0; }
