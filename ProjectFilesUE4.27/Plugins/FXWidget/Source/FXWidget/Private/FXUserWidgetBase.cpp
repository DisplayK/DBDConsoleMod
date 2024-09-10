#include "FXUserWidgetBase.h"

class UNiagaraComponent;

void UFXUserWidgetBase::StopParticle() const
{

}

void UFXUserWidgetBase::PlayParticle(float startAtTime, int32 numLoopsToPlay) const
{

}

UNiagaraComponent* UFXUserWidgetBase::GetNiagaraFX()
{
	return NULL;
}

UFXUserWidgetBase::UFXUserWidgetBase() : UUserWidget(FObjectInitializer::Get())
{
	this->niagaraSystem = NULL;
	this->isFillingWidget = false;
}
