#include "UMGBloodStoreItemPreviewWidget.h"

void UUMGBloodStoreItemPreviewWidget::BroadcastUnselectPressed()
{

}

void UUMGBloodStoreItemPreviewWidget::BroadcastRefreshPressed()
{

}

void UUMGBloodStoreItemPreviewWidget::BroadcastPurchasePressed()
{

}

UUMGBloodStoreItemPreviewWidget::UUMGBloodStoreItemPreviewWidget()
{
	this->_itemName = FText::GetEmpty();
	this->_itemDescription = FText::GetEmpty();
	this->_itemPrice = 0;
	this->_refreshPrice = FText::GetEmpty();
	this->_nodeStatusText = FText::GetEmpty();
	this->_refreshTitle = FText::GetEmpty();
	this->_itemSelectionTitle = FText::GetEmpty();
	this->_itemSelectionText = FText::GetEmpty();
	this->_purchaseTitle = FText::GetEmpty();
}
