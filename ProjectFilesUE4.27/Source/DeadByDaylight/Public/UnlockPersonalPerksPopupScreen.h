#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "UnlockPersonalPerksPopupScreen.generated.h"

UCLASS()
class UUnlockPersonalPerksPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UUnlockPersonalPerksPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUnlockPersonalPerksPopupScreen) { return 0; }
