#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "MatchMakingWidgetScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UMatchMakingWidgetScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UMatchMakingWidgetScreen();
};

FORCEINLINE uint32 GetTypeHash(const UMatchMakingWidgetScreen) { return 0; }
