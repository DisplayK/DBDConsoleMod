#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PresenterRequirementFunction.generated.h"

UCLASS()
class DBDUIPRESENTERS_API UPresenterRequirementFunction : public UObject
{
	GENERATED_BODY()

public:
	UPresenterRequirementFunction();
};

FORCEINLINE uint32 GetTypeHash(const UPresenterRequirementFunction) { return 0; }
