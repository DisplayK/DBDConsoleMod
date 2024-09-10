#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PromptManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPromptManager : public UObject
{
	GENERATED_BODY()

public:
	UPromptManager();
};

FORCEINLINE uint32 GetTypeHash(const UPromptManager) { return 0; }
