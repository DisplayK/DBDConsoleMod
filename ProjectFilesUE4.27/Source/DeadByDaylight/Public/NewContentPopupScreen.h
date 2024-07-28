#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "NewContentPopupScreen.generated.h"

UCLASS()
class UNewContentPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UNewContentPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UNewContentPopupScreen) { return 0; }
