#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UMGDragWidget.h"
#include "UMGDragWidget_HudEditor.generated.h"

class UUserWidget;
class UUMGHudEditorDragConstraintWidget;
class UCustomWidgetWrapper_HudEditor;
class UUMGDragWidget_HudEditor;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGDragWidget_HudEditor : public UUMGDragWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> OnSelectionWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUMGHudEditorDragConstraintWidget> DragLinkWidgetClass;

private:
	UPROPERTY(Transient, Export)
	UCustomWidgetWrapper_HudEditor* _customWrapper;

	UPROPERTY(Transient, Export)
	UUserWidget* _selectionWidget;

	UPROPERTY(Transient, Export)
	UUMGHudEditorDragConstraintWidget* _dragLinkWidget;

	UPROPERTY(Transient, Export)
	UUMGDragWidget_HudEditor* _parentLinkWidget;

	UPROPERTY(Transient, Export)
	UUMGDragWidget_HudEditor* _childLinkWidget;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetOnSelection(bool isSelected);

	UFUNCTION(BlueprintPure)
	UCustomWidgetWrapper_HudEditor* GetCustomWrapper() const;

public:
	UUMGDragWidget_HudEditor();
};

FORCEINLINE uint32 GetTypeHash(const UUMGDragWidget_HudEditor) { return 0; }
