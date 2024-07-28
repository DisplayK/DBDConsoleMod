#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "NewChapterPopupScreen.generated.h"

UCLASS()
class UNewChapterPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UNewChapterPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UNewChapterPopupScreen) { return 0; }
