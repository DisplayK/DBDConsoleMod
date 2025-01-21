#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaTutorialScreen.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaTutorialScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UUMGAtlantaTutorialScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaTutorialScreen) { return 0; }
