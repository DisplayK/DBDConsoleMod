#pragma once

#include "CoreMinimal.h"
#include "BasePopupScreen.h"
#include "ProcessingPopupScreen.generated.h"

UCLASS()
class UProcessingPopupScreen : public UBasePopupScreen
{
	GENERATED_BODY()

public:
	UProcessingPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UProcessingPopupScreen) { return 0; }
