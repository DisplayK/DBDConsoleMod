#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGCharacterRotationWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterRotationWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UUMGCharacterRotationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterRotationWidget) { return 0; }
