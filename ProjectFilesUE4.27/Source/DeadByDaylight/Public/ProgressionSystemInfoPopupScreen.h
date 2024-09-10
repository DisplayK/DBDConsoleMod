#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "ProgressionSystemInfoPopupScreen.generated.h"

UCLASS()
class UProgressionSystemInfoPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UProgressionSystemInfoPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UProgressionSystemInfoPopupScreen) { return 0; }
