#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "CinematicScreen.generated.h"

UCLASS()
class UCinematicScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UCinematicScreen();
};

FORCEINLINE uint32 GetTypeHash(const UCinematicScreen) { return 0; }
