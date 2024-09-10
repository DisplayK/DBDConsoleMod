#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "FearMarketPopupScreen.generated.h"

UCLASS()
class UFearMarketPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UFearMarketPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UFearMarketPopupScreen) { return 0; }
