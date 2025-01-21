#include "TextBlockOverrideProperties.h"

FTextBlockOverrideProperties::FTextBlockOverrideProperties()
{
	this->UseColor = false;
	this->Color = FSlateColor{};
	this->UseOpacity = false;
	this->Opacity = 0.0f;
	this->UseSize = false;
	this->Size = 0;
}
