#include "DragZone.h"
#include "Input/Events.h"

void UDragZone::OnMouseReleaseGlobal(const FPointerEvent& mouseEvent)
{

}

void UDragZone::OnMousePressHitzone()
{

}

void UDragZone::OnMousePressGlobal(const FPointerEvent& mouseEvent)
{

}

void UDragZone::OnMouseMoveGlobal(const FPointerEvent& mouseEvent)
{

}

void UDragZone::OnMouseHoverHitzone()
{

}

void UDragZone::OnAnalogInput(const FAnalogInputEvent& analogEvent)
{

}

UDragZone::UDragZone() : UUserWidget(FObjectInitializer::Get())
{
	this->DeadZone = 5.000000;
	this->Axis = EDragZoneAxis::Horizontal;
	this->DebugPreview = NULL;
	this->HitzoneButton = NULL;
}
