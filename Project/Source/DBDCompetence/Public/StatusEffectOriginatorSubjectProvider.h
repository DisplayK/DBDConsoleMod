#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "StatusEffectOriginatorSubjectProvider.generated.h"

UCLASS()
class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

public:
	UStatusEffectOriginatorSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UStatusEffectOriginatorSubjectProvider) { return 0; }
