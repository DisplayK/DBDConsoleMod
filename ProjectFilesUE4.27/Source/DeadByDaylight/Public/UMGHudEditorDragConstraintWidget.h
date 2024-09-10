#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorDragConstraintWidget.generated.h"

class USizeBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorDragConstraintWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	USizeBox* LinkSizeBox;

private:
	UPROPERTY(Transient, Export)
	UUserWidget* _childWidget;

	UPROPERTY(Transient, Export)
	UUserWidget* _parentWidget;

public:
	UUMGHudEditorDragConstraintWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorDragConstraintWidget) { return 0; }
