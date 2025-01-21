#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "CollectableOwnerSubjectProvider.generated.h"

UCLASS()
class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

public:
	UCollectableOwnerSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UCollectableOwnerSubjectProvider) { return 0; }
