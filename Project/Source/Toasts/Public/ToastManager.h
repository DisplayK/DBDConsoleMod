#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ToastManager.generated.h"

UCLASS()
class TOASTS_API UToastManager : public UObject
{
	GENERATED_BODY()

public:
	UToastManager();
};

FORCEINLINE uint32 GetTypeHash(const UToastManager) { return 0; }
