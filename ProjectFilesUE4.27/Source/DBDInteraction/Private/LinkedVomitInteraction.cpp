#include "LinkedVomitInteraction.h"

class UVomitStateComponent;

bool ULinkedVomitInteraction::IsVomiting() const
{
	return false;
}

UVomitStateComponent* ULinkedVomitInteraction::GetVomitStateComponent() const
{
	return NULL;
}

ULinkedVomitInteraction::ULinkedVomitInteraction()
{

}
