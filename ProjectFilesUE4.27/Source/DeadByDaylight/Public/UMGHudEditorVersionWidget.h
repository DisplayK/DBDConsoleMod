#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorVersionWidget.generated.h"

class UButton;
class UUMGDragWidget_HudEditor;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorVersionWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* VersionButton;

private:
	UPROPERTY(Transient, Export)
	UUMGDragWidget_HudEditor* _onEditWidget;

public:
	UFUNCTION(BlueprintCallable)
	void Show();

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonClick();

public:
	UFUNCTION(BlueprintCallable)
	void Hide();

public:
	UUMGHudEditorVersionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorVersionWidget) { return 0; }
