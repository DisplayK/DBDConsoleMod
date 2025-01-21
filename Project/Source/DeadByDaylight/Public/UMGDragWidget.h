#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGDragWidget.generated.h"

class UCustomWidgetWrapper_HudEditor;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGDragWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UCustomWidgetWrapper_HudEditor*> _allEditableWidgets;

public:
	UFUNCTION(BlueprintCallable)
	void SetClampToViewportDirty();

	UFUNCTION(BlueprintPure)
	TArray<UCustomWidgetWrapper_HudEditor*> GetAllEditableWidgets() const;

public:
	UUMGDragWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGDragWidget) { return 0; }
