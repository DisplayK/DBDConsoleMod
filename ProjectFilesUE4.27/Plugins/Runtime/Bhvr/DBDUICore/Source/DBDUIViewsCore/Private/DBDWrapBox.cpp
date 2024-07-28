#include "DBDWrapBox.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"

class UDBDWrapBoxSlot;
class UWidget;

void UDBDWrapBox::SetInnerSlotPadding(FVector2D InPadding)
{

}

void UDBDWrapBox::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{

}

UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(UWidget* Content)
{
	return NULL;
}

UDBDWrapBox::UDBDWrapBox()
{
	this->WrapWidth = 500.000000;
	this->bExplicitWrapWidth = false;
	this->HorizontalAlignment = HAlign_Left;
}
