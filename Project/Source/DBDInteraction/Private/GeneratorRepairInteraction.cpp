#include "GeneratorRepairInteraction.h"

class ADBDPlayer;
class AGenerator;

void UGeneratorRepairInteraction::SetIsObstructed(bool obstructed)
{

}

bool UGeneratorRepairInteraction::IsObstructed()
{
	return false;
}

bool UGeneratorRepairInteraction::IsInteractionPossibleInternal(const ADBDPlayer* player) const
{
	return false;
}

bool UGeneratorRepairInteraction::IsBeingRepaired()
{
	return false;
}

AGenerator* UGeneratorRepairInteraction::GetOwningGenerator() const
{
	return NULL;
}

float UGeneratorRepairInteraction::GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

UGeneratorRepairInteraction::UGeneratorRepairInteraction()
{

}
