#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoreCursor.generated.h"

class UScaleBox;

UCLASS(Abstract, EditInlineNew)
class UCoreCursor : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UScaleBox* CursorScaleBox;

public:
	UCoreCursor();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCursor) { return 0; }
