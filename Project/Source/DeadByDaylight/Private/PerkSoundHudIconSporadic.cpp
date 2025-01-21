#include "PerkSoundHudIconSporadic.h"
#include "Layout/Geometry.h"

void UPerkSoundHudIconSporadic::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{

}

UPerkSoundHudIconSporadic::UPerkSoundHudIconSporadic()
{
	this->SporadicIcon = NULL;
	this->FadeInRate = 1.000000;
	this->FadeOutRate = 1.000000;
	this->AnimationStartOpacity = 1.000000;
	this->FadePolynomialOrder = 3;
	this->DisplayIcon = false;
}
