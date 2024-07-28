#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DlcHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDlcHelper : public UObject
{
	GENERATED_BODY()

public:
	UDlcHelper();
};

FORCEINLINE uint32 GetTypeHash(const UDlcHelper) { return 0; }
