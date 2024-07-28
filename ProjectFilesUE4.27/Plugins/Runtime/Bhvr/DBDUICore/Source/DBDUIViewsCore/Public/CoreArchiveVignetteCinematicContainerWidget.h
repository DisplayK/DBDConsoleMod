#pragma once

#include "CoreMinimal.h"
#include "CoreTabContainerWidget.h"
#include "CoreArchiveVignetteCinematicContainerWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteCinematicContainerWidget : public UCoreTabContainerWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void UnlockCinematics();

public:
	UCoreArchiveVignetteCinematicContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteCinematicContainerWidget) { return 0; }
