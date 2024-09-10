#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputDataTable.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputDataTable : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UHoudiniInputDataTable();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputDataTable) { return 0; }
