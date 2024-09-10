#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "ArchiveWidgetScreen.generated.h"

UCLASS()
class UArchiveWidgetScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnRewardsButtonClick();

	UFUNCTION()
	void OnQuestsButtonClick();

public:
	UArchiveWidgetScreen();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveWidgetScreen) { return 0; }
