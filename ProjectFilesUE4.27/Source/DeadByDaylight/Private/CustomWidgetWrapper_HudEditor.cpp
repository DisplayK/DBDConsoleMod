#include "CustomWidgetWrapper_HudEditor.h"
#include "UObject/NoExportTypes.h"

class UWidget;
class UCustomWidgetWrapper_HudEditor;

float UCustomWidgetWrapper_HudEditor::GetScale() const
{
	return 0.0f;
}

float UCustomWidgetWrapper_HudEditor::GetOpacity() const
{
	return 0.0f;
}

void UCustomWidgetWrapper_HudEditor::FlipScreenPosition()
{

}

void UCustomWidgetWrapper_HudEditor::FlipPositionWithChildLinkWidget()
{

}

void UCustomWidgetWrapper_HudEditor::ClampToViewport()
{

}

bool UCustomWidgetWrapper_HudEditor::CanEditScale() const
{
	return false;
}

bool UCustomWidgetWrapper_HudEditor::CanEditOpacity() const
{
	return false;
}

void UCustomWidgetWrapper_HudEditor::ApplyScaleWithOverlappingWrappers(float scale, UWidget* widget, const TArray<UCustomWidgetWrapper_HudEditor*>& allEditableWrappers, bool needDetectOverlapping)
{

}

void UCustomWidgetWrapper_HudEditor::AddToTranslation(FVector2D translation)
{

}

UCustomWidgetWrapper_HudEditor::UCustomWidgetWrapper_HudEditor()
{
	this->MinOpacity = 0.000000;
	this->MaxOpacity = 1.000000;
	this->MinScale = 0.500000;
	this->MaxScale = 1.500000;
	this->NbVersions = 1;
	this->HideUnderOpacity = 0.100000;
	this->HiddenStatusOpacity = 0.200000;
	this->OverlapAboveSizeRatio = 0.150000;
	this->IsEditingHudByInput = false;
}
