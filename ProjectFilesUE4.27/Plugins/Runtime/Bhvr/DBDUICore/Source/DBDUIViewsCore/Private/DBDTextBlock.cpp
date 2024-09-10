#include "DBDTextBlock.h"

void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
{

}

void UDBDTextBlock::PreviewUndocked()
{

}

void UDBDTextBlock::PreviewLargeText()
{

}

void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
{

}

void UDBDTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
{

}

bool UDBDTextBlock::GetIsUpperCase() const
{
	return false;
}

UDBDTextBlock::UDBDTextBlock()
{
	this->TextStyle = TEXT("");
	this->_switchDockStateManager = NULL;
	this->_textManager = NULL;
	this->_isUpperCase = false;
	this->_hasLargeText = false;
	this->_overrideUndockedPropertiesWithLargeText = false;
	this->_hasUndocking = false;
}
