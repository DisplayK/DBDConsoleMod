#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModifierSubjectProvider.generated.h"

UCLASS(Abstract)
class COMPETENCE_API UModifierSubjectProvider : public UObject
{
	GENERATED_BODY()

public:
	UModifierSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UModifierSubjectProvider) { return 0; }
