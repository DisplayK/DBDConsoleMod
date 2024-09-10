#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorLayoutScreen.generated.h"

class UUMGDragWidget_HudEditor;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorLayoutScreen : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UUMGDragWidget_HudEditor*> _editableWidgets;

public:
	UUMGHudEditorLayoutScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorLayoutScreen) { return 0; }
