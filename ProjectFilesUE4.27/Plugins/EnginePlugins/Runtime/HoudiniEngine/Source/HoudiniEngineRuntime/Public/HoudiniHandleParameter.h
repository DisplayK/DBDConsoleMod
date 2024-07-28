#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniHandleParameter.generated.h"

class UHoudiniParameter;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniHandleParameter : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UHoudiniParameter* AssetParameter;

	UPROPERTY()
	int32 TupleIndex;

public:
	UHoudiniHandleParameter();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniHandleParameter) { return 0; }
