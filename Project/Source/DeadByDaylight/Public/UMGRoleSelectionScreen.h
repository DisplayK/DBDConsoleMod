#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ERoleSelectionScreenButton.h"
#include "UMGRoleSelectionScreen.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRoleSelectionScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	int32 _newInboxMessageCount;

public:
	UFUNCTION(BlueprintCallable)
	void ButtonClickEvent(ERoleSelectionScreenButton buttonId);

public:
	UUMGRoleSelectionScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRoleSelectionScreen) { return 0; }
