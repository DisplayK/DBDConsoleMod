#include "CoreHudRootWidget.h"

UCoreHudRootWidget::UCoreHudRootWidget() : UUserWidget(FObjectInitializer::Get())
{
	this->WidgetContainer = NULL;
	this->OuterContainer = NULL;
	this->SpectateContainer = NULL;
	this->ScaleHud = NULL;
	this->UnfocusedOpacity = 0.200000;
	this->Test4kDpiScalingCurve = NULL;
	this->Test4kDpiCurveClass = NULL;
	this->Test4kDpiCurveWidget = NULL;
	this->EndGameCollapseBarWidgetClass = NULL;
	this->EquippedItemWidgetClass = NULL;
	this->EquippedPowerWidgetClass = NULL;
	this->ExternalEffectsWidgetClass = NULL;
	this->HudAlertWidgetClass = NULL;
	this->InteractionProgressWidgetClass = NULL;
	this->InteractionPromptsContainerWidgetClass = NULL;
	this->ItemInteractionWidgetClass = NULL;
	this->LeaningArrowsWidgetClass = NULL;
	this->MatchResultWidgetClass = NULL;
	this->OfferingInteractionWidgetClass = NULL;
	this->PerksContainerWidgetClass = NULL;
	this->PingStatusWidgetClass = NULL;
	this->PlayerStatusesWidgetClass = NULL;
	this->ScreenIndicatorWidgetClass = NULL;
	this->SpectateBarWidgetClass = NULL;
	this->StartSequenceWidgetClass = NULL;
	this->StatusEffectWidgetClass = NULL;
	this->TutorialMysteryNoteWidgetClass = NULL;
	this->TutorialObjectivesWidgetClass = NULL;
	this->TutorialPopupWidgetClass = NULL;
	this->_coreBaseViewInterfaces = TArray<TScriptInterface<ICoreBaseViewInterface>>();
}
