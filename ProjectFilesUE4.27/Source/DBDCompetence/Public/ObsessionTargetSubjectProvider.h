#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "ObsessionTargetSubjectProvider.generated.h"

UCLASS()
class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

public:
	UObsessionTargetSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UObsessionTargetSubjectProvider) { return 0; }
