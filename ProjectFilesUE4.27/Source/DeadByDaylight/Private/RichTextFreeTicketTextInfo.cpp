#include "RichTextFreeTicketTextInfo.h"

FRichTextFreeTicketTextInfo::FRichTextFreeTicketTextInfo()
{
	this->TextStyle = FTextBlockStyle{};
	this->Content = FText::GetEmpty();
	this->Padding = FMargin{};
}
