#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetInstanceInputField.generated.h"

UCLASS()
class UHoudiniAssetInstanceInputField : public UObject
{
	GENERATED_BODY()

public:
	UHoudiniAssetInstanceInputField();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetInstanceInputField) { return 0; }
