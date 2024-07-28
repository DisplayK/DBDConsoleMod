#include "RichTextRewardRow.h"

FRichTextRewardRow::FRichTextRewardRow()
{
	this->TextStyle = FTextBlockStyle{};
	this->TextMargin = FMargin{};
	this->Brush = FSlateBrush{};
	this->TintsBrush = FSlateBrush{};
	this->BackgroundBrush = FSlateBrush{};
}
