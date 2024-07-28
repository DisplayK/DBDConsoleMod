#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CompetenceDebugger.generated.h"

UCLASS()
class COMPETENCE_API UCompetenceDebugger : public UObject
{
	GENERATED_BODY()

public:
	UCompetenceDebugger();
};

FORCEINLINE uint32 GetTypeHash(const UCompetenceDebugger) { return 0; }
