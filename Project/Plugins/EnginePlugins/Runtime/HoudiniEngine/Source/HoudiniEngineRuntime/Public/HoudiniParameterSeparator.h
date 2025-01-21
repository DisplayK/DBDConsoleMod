#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterSeparator.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterSeparator : public UHoudiniParameter
{
	GENERATED_BODY()

public:
	UHoudiniParameterSeparator();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterSeparator) { return 0; }
