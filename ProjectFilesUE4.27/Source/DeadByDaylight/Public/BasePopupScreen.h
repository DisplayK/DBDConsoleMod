#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "BasePopupScreen.generated.h"

UCLASS()
class UBasePopupScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UBasePopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UBasePopupScreen) { return 0; }
