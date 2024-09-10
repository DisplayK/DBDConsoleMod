#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "OwnerSubjectProvider.generated.h"

UCLASS()
class COMPETENCE_API UOwnerSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

public:
	UOwnerSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UOwnerSubjectProvider) { return 0; }
