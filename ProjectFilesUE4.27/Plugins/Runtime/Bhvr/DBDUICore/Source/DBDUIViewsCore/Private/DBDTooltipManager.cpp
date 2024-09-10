#include "DBDTooltipManager.h"
#include "LoadoutTooltipData.h"
#include "ArchiveNodeViewData.h"
#include "ArchiveRewardNodeTooltipViewData.h"
#include "CustomizationTooltipViewData.h"
#include "Layout/Geometry.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "ETooltipHorizontalAlignment.h"
#include "CharacterTooltipViewData.h"
#include "ETooltipVerticalAlignment.h"
#include "CompendiumButtonData.h"

void UDBDTooltipManager::ShowLoadoutTooltip(const FLoadoutTooltipData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::ShowLabelTooltip(const FText& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::ShowCustomizationTooltip(const FCustomizationTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::ShowCurrencyTooltip(const FCurrencyProgressionTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::ShowCharacterTooltip(const FCharacterTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::ShowArchiveRewardNodeTooltip(const FArchiveRewardNodeTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::ShowArchiveNodeTooltip(const FArchiveNodeViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::ShowArchiveCompendiumTooltip(const FCompendiumButtonData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
{

}

void UDBDTooltipManager::OnViewportCreated()
{

}

void UDBDTooltipManager::HideTooltip()
{

}

UDBDTooltipManager::UDBDTooltipManager()
{
	this->_rootWidget = NULL;
	this->_tooltipPool = TMap<ETooltipType, UUserWidget*>();
	this->_currentTooltip = NULL;
}
